#include "hotel.h"

Hotel::Hotel(int room_count){
    this->room_count = room_count;
    this->rooms = new Room[this->room_count];
    for(int i = 0; i < room_count; i++){
        int cap;
        cin >> cap;
        Room r(cap);
        rooms[i] = r;
    }
}

Hotel::Hotel(const Hotel &tmp){
    this->room_count = tmp.room_count;
    this->rooms = new Room[this->room_count];
    for(int i = 0; i < this->room_count; i++){
        this->rooms[i] = tmp.rooms[i];
    }
}

Hotel::~Hotel(){
    delete [] rooms;
}

int Hotel::count_free(){
    int count = 0;
    for(int i = 0; i < this->room_count; i++){
        count += (!this->rooms[i].is_occupied()?1:0);
    }
    return count;
}

int Hotel::find_room(int k){
    if(count_free() == 0){
        return -1;
    }
    for(int i = 0; i < this->room_count; i++){
        if(!this->rooms[i].is_occupied() && this->rooms[i].get_capacity() == k){
            this->rooms[i].reserve();
            return i;
        }
    }
    return -1;
}

int Hotel::get_room_count(){ return room_count; }

Room &Hotel::get_room(int p){ return rooms[p]; }
