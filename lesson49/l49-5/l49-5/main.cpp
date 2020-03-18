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

class Helicopter: public Car {
   int height;                  // Высота, на которой находится вертолёт
   int water;                   // Количество воды в вертолёте

public:
    Helicopter();               // По умолчанию считается, что вертолёт находится в точке 0 на высоте 0

    void lift(int height);      // Подняться на высоту height
    void add_water(int amount); // Добавить amount воды в контейнер
    void release_water();       // Выпустить всю воду
    int get_height();           // Получить текущую высоту вертолёта
    int get_water();            // Получить текущее количество воды в контейнере
    void move(int);
};

Helicopter::Helicopter():Car(), height(0), water(0){}

void Helicopter::lift(int height)
{
    if(water > 15000) return;
    if(this->height + height < 0){
        this->height = 0;
        return;
    }
    this->height += height;
}

void Helicopter::add_water(int amount)
{
    if(!height){
        water += amount;
    }
}

void Helicopter::release_water()
{
    water = 0;
}

int Helicopter::get_height()
{
    return height;
}

int Helicopter::get_water()
{
    return water;
}

void Helicopter::move(int direction)
{
    if(height){
        pos += direction;
    }
}



int main()
{
    int k;
    cin >> k;
    Helicopter h;
    for(int i = 0; i < k; i++){
        char cmd[15] = {};
        cin >> cmd;
        if(!strcmp(cmd, "MOVE")){
            int tmp;
            cin >> tmp;
            h.move(tmp);
        }else if(!strcmp(cmd, "LIFT")){
            int tmp;
            cin >> tmp;
            h.lift(tmp);
        }else if(!strcmp(cmd, "WATER")){
            int tmp;
            cin >> tmp;
            h.add_water(tmp);
        }else if(!strcmp(cmd, "RELEASE")){
            h.release_water();
        }else if(!strcmp(cmd, "STATUS")){
            cout << h.get_position() << " " << h.get_height() << " " << h.get_water() << endl;
        }
    }
    return 0;
}


