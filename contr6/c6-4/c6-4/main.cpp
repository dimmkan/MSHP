#include <iostream>
#include <cstring>
#include <fstream>

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
    Hotel(int room_count, ifstream &fin);
    Hotel(const Hotel &tmp);
    ~Hotel();

    int get_room_count(){ return this->room_count; }
    Room &get_room(int p){ return this->rooms[p];}
    int count_free();
    int find_room(int k);
};

Hotel::Hotel(int room_count, ifstream &fin){
    this->room_count = room_count;
    this->rooms = new Room[this->room_count];
    for(int i = 0; i < room_count; i++){
        int cap; bool occ;
        fin >> cap >> occ;
        Room r(cap, occ);
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

Hotel load_hotel(ifstream &file){
    int cnt;
    file >> cnt;
    Hotel h(cnt, file);
    return h;
}

void save_hotel(ofstream &fout, Hotel h){
    fout << h.get_room_count() << endl;
    for(int i = 0; i < h.get_room_count(); i++){
        fout << h.get_room(i).get_capacity() << " " << h.get_room(i).is_occupied() << endl;
    }
}

void solve(){
    ifstream fin("source.txt", ios::in);
    ofstream fout("destination.txt", ios::out);
    Hotel h = load_hotel(fin);
    int n;
    fin >> n;
    char c[30];
    for(int i = 0; i < n; i++){
        fin >> c;
        if(!strcmp(c, "RESERVE")){
            int p;
            fin >> p;
            h.find_room(p);
        }else if(!strcmp(c, "FREE")){
            int p;
            fin >> p;
            h.get_room(p).free();
        }else if(!strcmp(c, "STATUS")){
            h.count_free();
        }else{

        }
    }
    save_hotel(fout, h);
    fin.close();
    fout.close();
}

int main()
{
    solve();
    return 0;
}
