#include "room.h"

Room::Room(int capacity, bool occupied):capacity(capacity), occupied(occupied){}

bool Room::is_occupied()
{
    return occupied;
}

int Room::get_capacity()
{
    return capacity;
}

void Room::reserve()
{
    occupied = true;
}

void Room::free()
{
    occupied = false;
}




