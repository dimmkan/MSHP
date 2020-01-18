#include <iostream>
#include <cstring>

using namespace std;

class Hotel{
private:
    bool occupied[16];
public:
    Hotel();
    bool is_occupied(int p){return this->occupied[p];}
    void free_room(int p){this->occupied[p] = false;}
    int count_free();
    int find_room();
};

Hotel::Hotel(){
    for(int i = 0; i < 16; i++){
        this->occupied[i] = false;
    }
}

int Hotel::count_free(){
    int count = 0;
    for(int i = 0; i < 16; i++){
        count += (!this->is_occupied(i)?1:0);
    }
    return count;
}

int Hotel::find_room(){
    if(count_free() == 0){
        return -1;
    }
    for(int i = 0; i < 16; i++){
        if(!this->occupied[i]){
            this->occupied[i] = true;
            return i;
        }
    }
}

void solve(){
    int n;
    cin >> n;
    char c[30];
    Hotel h;
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
