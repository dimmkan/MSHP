#include "order.h"

Order::Order(const char *name, int fine)
{
    strncpy(this->name, name, 101);
    this->fine = fine;
}

Order::Order(const Order &tmp){
    this->fine = tmp.fine;
    strcpy(this->name, tmp.name);
}

const char *Order::get_name()
{
    return name;
}

unsigned Order::get_fine()
{
    return fine;
}

void Order::show()
{
    cout << name << ": " << fine << endl;
}

