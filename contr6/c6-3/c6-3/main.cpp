#include <iostream>
#include <cstring>

using namespace std;

class Room{
private:
    int capacity;
    bool occupied;
public:
    Room(int capacity = 1, bool occupied = false);
    bool is_occupied(){ return this->occupied; }
    int get_capacity(){ return this->capacity; }
    void reserve(){ this->occupied = true; }
    void free(){ this->occupied = false; }
};

Room::Room(int capacity, bool occupied){
    this->capacity = capacity;
    this->occupied = occupied;
}

class Hotel{
private:
    int room_count;
    Room *rooms;
public:
    Hotel(int room_count);
    Hotel(const Hotel &tmp);
    ~Hotel();

    int get_room_count(){ return this->room_count; }
    Room &get_room(int p){ this->rooms[p].free(); return this->rooms[p];}
    int count_free();
    int find_room(int k);
};

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

void solve(){
    int cnt;
    cin >> cnt;
    Hotel h(cnt);
    int n;
    cin >> n;
    char c[30];
    for(int i = 0; i < n; i++){
        cin >> c;
        if(!strcmp(c, "RESERVE")){
            int p;
            cin >> p;
            cout << h.find_room(p) << endl;
        }else if(!strcmp(c, "FREE")){
            int p;
            cin >> p;
            Room r = h.get_room(p);
        }else if(!strcmp(c, "STATUS")){
            cout << h.count_free() << endl;
        }else{

        }
    }
}

int main()
{
    solve();
    return 0;
}
