#include <iostream>
#include <cstring>

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

int main()
{
    Car c;
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        char cmd[10];
        cin >> cmd;
        if(!strcmp(cmd, "MOVE")){
            int tmp;
            cin >> tmp;
            c.move(tmp);
        }else if(!strcmp(cmd, "POSITION")){
            cout << c.get_position() << endl;
        }
    }
    return 0;
}
