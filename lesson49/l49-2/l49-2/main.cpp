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


class Taxi: public Car {
    long long cost;
    long long distance;

public:
    Taxi(int cost);

    long long get_total_cost();
    void reset();
    void move(int direction);
};

Taxi::Taxi(int cost): Car(){
    this->cost = cost;
    distance = 0;
}

long long Taxi::get_total_cost()
{
    return cost*distance;
}

void Taxi::reset()
{
    distance = 0;
}

void Taxi::move(int direction)
{
    pos += direction;
    distance += abs(direction);
}


int main()
{
    int k, z;
    cin >> k >> z;
    Taxi t(z);
    for(int i = 0; i < k; i++){
        char cmd[10];
        cin >> cmd;
        if(!strcmp(cmd, "MOVE")){
            int tmp;
            cin >> tmp;
            t.move(tmp);
        }else if(!strcmp(cmd, "POSITION")){
            cout << t.get_position() << endl;
        }else if(!strcmp(cmd, "COST")){
            cout << t.get_total_cost() << endl;
        }else if(!strcmp(cmd, "RESET")){
            t.reset();
        }
    }
    return 0;
}
