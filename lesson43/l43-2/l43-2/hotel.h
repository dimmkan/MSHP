#ifndef HOTEL_H
#define HOTEL_H

#include "room.h"

class Hotel{
private:
    int room_count;
    Room *rooms;
public:
    Hotel(int room_count);
    Hotel(const Hotel &tmp);
    ~Hotel();

    int get_room_count();
    Room &get_room(int p);
    int count_free();
    int find_room(int k);
};

#endif // HOTEL_H
