#include <iostream>
#include <cstring>

using namespace std;

class Barrel{
    int cnt;
    char *balls;
    int current;
public:
    Barrel(char *str = nullptr);
    ~Barrel();

    int count(){return this->cnt;}
    void clockwise(int x);
    void countercw(int x);
    char extract();
};

Barrel::Barrel(char *str){
    if(!str){
        this->cnt = 0;
        this->balls = nullptr;
    }else{
        this->cnt = strlen(str);
        this->balls = new char[this->cnt];
        strncpy(this->balls, str, this->cnt);
    }
    this->current = 0;
}

Barrel::~Barrel(){
    delete [] this->balls;
}

void Barrel::clockwise(int x){
    if(this->cnt){
        this->current = (this->current + x) % this->cnt;
    }
}

void Barrel::countercw(int x){
    if(this->cnt){
        this->current = (this->current + this->cnt - x) % this->cnt;
    }
}

char Barrel::extract(){
    if(!cnt || !balls){
        return '\0';
    }
    char c = balls[current];
    for(int i = current; i < cnt-1; i++){
        balls[i] = balls[i+1];
    }
    cnt--;
    return c;
}

int main()
{
    char s[1001] = {};
    cin >> s;
    Barrel b(s);
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int v;
        cin >> v;
        if(v > 0) b.clockwise(v);
        if(v < 0) b.countercw(-v);
        cout << b.extract();
    }
    return 0;
}
