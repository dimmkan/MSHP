#ifndef ROOM_H
#define ROOM_H

#include <iostream>
using namespace std;

class Room{
private:
    int capacity;
    bool occupied;
public:
    Room(int capacity = 1, bool occupied = false);
    bool is_occupied();
    int get_capacity();
    void reserve();
    void free();
};

#endif // ROOM_H
