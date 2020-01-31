#ifndef ORDER_H
#define ORDER_H

#include <cstring>
#include <iostream>
using namespace std;

class Order {
    char name[101];       // Имя пользователя
    unsigned fine;        // Размер штрафа
public:
    Order(const char *name = "User", int fine = 100);
    Order(const Order &tmp);
    const char *get_name();     // Получение имени пользователя. Полученный указатель не должен предоставлять возможности изменять имя .
    unsigned get_fine();       // Получение размера штрафа
    void show();          // Вывод всех данных в формате: "name: fine"
};

#endif // ORDER_H
