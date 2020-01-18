#include <iostream>
#include <cstring>

using namespace std;

class Hotel{
private:
    bool *occupied;
    int room_count;
public:
    Hotel(int p);
    Hotel(const Hotel &tmp);
    ~Hotel();
    int get_room_count(){ return this->room_count; }
    bool is_occupied(int p){return this->occupied[p];}
    void free_room(int p){this->occupied[p] = false;}
    int count_free();
    int find_room();
};

Hotel::Hotel(int p){
    room_count = p;
    occupied = new bool[room_count];
    for(int i = 0; i < room_count; i++){
        occupied[i] = false;
    }
}

Hotel::Hotel(const Hotel &tmp){
    this->room_count = tmp.room_count;
    this->occupied = new bool[this->room_count];
    for(int i = 0; i < this->room_count; i++){
        this->occupied[i] = tmp.occupied[i];
    }
}

Hotel::~Hotel(){
    delete [] occupied;
}

int Hotel::count_free(){
    int count = 0;
    for(int i = 0; i < this->room_count; i++){
        count += (!this->is_occupied(i)?1:0);
    }
    return count;
}

int Hotel::find_room(){
    if(count_free() == 0){
        return -1;
    }
    for(int i = 0; i < this->room_count; i++){
        if(!this->occupied[i]){
            this->occupied[i] = true;
            return i;
        }
    }
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
            cout << h.find_room() << endl;
        }else if(!strcmp(c, "FREE")){
            int p;
            cin >> p;
            h.free_room(p);
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
