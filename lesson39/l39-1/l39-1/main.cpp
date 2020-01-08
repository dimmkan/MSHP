#include <iostream>
#include <iomanip>

using namespace std;

class Time{
int h;
int m;
int s;
public:
    Time();
    Time(int h, int m, int s = 0);
    void add_seconds(int x);
    void show();
};

Time::Time(){
    this->h = this->m = this->s = 0;
}

Time::Time(int h, int m, int s){
    this->h = h;
    this->m = m;
    this->s = s;
}

void Time::add_seconds(int x){
    int curr_h = x/3600;
    int curr_m = (x - (x/3600)*3600)/60;
    int curr_s = x - curr_h*3600 - curr_m*60;
    if(x > 0){
        this->s = (this->s + curr_s);
        if(this->s >= 60){
            this->m = (this->m + curr_m) + (this->s)/60;
            this->s = (this->s)%60;
        }else{
            this->m = (this->m + curr_m);
        }
        if(this->m >= 60){
            this->h = (this->h + curr_h) + (this->m)/60;
            this->m = (this->m)%60;
        }else{
            this->h = (this->h + curr_h);
        }
        this->h %= 24;
    }else{
        this->s = (this->s + curr_s);
        if(this->s < 0){
            this->m = (this->m + curr_m) - 1;
            this->s = 60 + this->s;
        }else{
            this->m = (this->m + curr_m);
        }
        if(this->m < 0){
            this->h = (this->h + 24 + curr_h) - 1;
            this->m = 60 + this->m;
        }else{
            this->h = (this->h + 24 + curr_h);
        }
        this->h %= 24;
    }
}

void Time::show(){
    cout << setfill('0') << setw(2) << this->h << ":" << setfill('0') << setw(2) << this->m << ":" << setfill('0') << setw(2) << this->s << endl;
}

Time read_time(){
    int p, h, m, s;
    cin >> p >> h >> m >> s;
    switch (p) {
        case 0:
            return Time();
        case 2:
            return Time(h, m);
        case 3:
            return Time(h, m, s);
    }
}

int main()
{
    Time t = read_time();
    int count;
    cin >> count;
    for(int i = 0; i < count; i++){
        int x;
        cin >> x;
        t.add_seconds(x);
        t.show();
    }
    return 0;
}
