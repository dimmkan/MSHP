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
protected:
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
        int new_count = 0, *tmp = new int[passenger_count];
        for (int i = 0; i < passenger_count; ++i){
            if (this->pos != passengers[i]){
                tmp[new_count++] = passengers[i];
            }

        }
        for (int i = 0; i < new_count; ++i){
            passengers[i] = tmp[i];
        }
        for (int i = new_count; i < passenger_count; ++i){
            passengers[i] = 0;
        }
        passenger_count = new_count;
        delete [] tmp;
    }
}

int Bus::get_passenger_count()
{
    return passenger_count;
}

class Trolleybus: public Bus{
    int L;
    int R;
public:
    Trolleybus(int P, int C, int L, int R);
    void move(int);
};

Trolleybus::Trolleybus(int P, int C, int L, int R):Bus(C)
{
    this->pos = P;
    this->L = L;
    this->R = R;
}

void Trolleybus::move(int direction)
{
    if(pos + direction > R){
        pos = R;
    }else if(pos + direction < L){
        pos = L;
    }else{
        pos += direction;
    }
}

int main()
{
    int k, p, c, l, r;
    cin >> k >> p >> c >> l >> r;
    Trolleybus t(p, c, l, r);
    for(int i = 0; i < k; i++){
        char cmd[20];
        cin >> cmd;
        if(!strcmp(cmd, "MOVE")){
            int tmp;
            cin >> tmp;
            t.move(tmp);
        }else if(!strcmp(cmd, "POSITION")){
            cout << t.get_position() << endl;
        }else if(!strcmp(cmd, "PASSENGER")){
            int tmp;
            cin >> tmp;
            cout << (t.add_passenger(tmp)?"SUCCESS":":(") << endl;
        }else if(!strcmp(cmd, "RELEASE")){
            t.release();
        }else if(!strcmp(cmd, "PASSENGERS")){
            cout << t.get_passenger_count() << endl;
        }
    }
    return 0;
}


