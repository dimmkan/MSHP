#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Car {

protected:
    int pos;

public:
    Car():pos(0){}
    void move(int direction);
    int get_position();
};

void Car::move(int direction)
{
    pos += direction;
}

int Car::get_position()
{
    return pos;
}

class Bus: public Car{
   int capacity;
   int passenger_count;
   int* passengers;
public:
   Bus(int c);
   ~Bus();
   bool add_passenger(int destination);
   void release();
   int get_passenger_count();
};

Bus::Bus(int c):Car()
{
    passengers = new int[c];
    for(int i = 0; i < c; i++){
        passengers[i] = 0;
    }
    capacity = c;
    passenger_count = 0;
}

Bus::~Bus()
{
    delete [] passengers;
}

bool Bus::add_passenger(int destination)
{
    if(passenger_count+1 > capacity){
        return false;
    }
    int* tmp = new int[passenger_count+1];
    for(int i = 0; i < passenger_count; i++){
        tmp[i] = passengers[i];
    }
    tmp[passenger_count++] = destination;
    delete [] passengers;
    passengers = tmp;
    return true;
}

void Bus::release()
{
    if(passenger_count){
        int cnt = 0;
        for(int i = 0; i < passenger_count; i++){
            if(passengers[i] != pos){
                cnt++;
            }else{
                passengers[i] = 0;
            }
        }
        int* tmp = new int[cnt];
        for(int i = 0, j = 0; i < passenger_count; i++){
            if(passengers[i]){
                tmp[j++] = passengers[i];
            }
        }
        passenger_count = cnt;
        delete [] passengers;
        passengers = tmp;
    }
}

int Bus::get_passenger_count()
{
    return passenger_count;
}

int main()
{
    int k, c;
    cin >> k >> c;
    Bus b(c);
    for(int i = 0; i < k; i++){
        char cmd[20];
        cin >> cmd;
        if(!strcmp(cmd, "MOVE")){
            int tmp;
            cin >> tmp;
            b.move(tmp);
        }else if(!strcmp(cmd, "POSITION")){
            cout << b.get_position() << endl;
        }else if(!strcmp(cmd, "PASSENGER")){
            int tmp;
            cin >> tmp;
            cout << (b.add_passenger(tmp)?"SUCCESS":":(") << endl;
        }else if(!strcmp(cmd, "RELEASE")){
            b.release();
        }else if(!strcmp(cmd, "PASSENGERS")){
            cout << b.get_passenger_count() << endl;
        }
    }
    return 0;
}
