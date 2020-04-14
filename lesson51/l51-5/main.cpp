#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <typeinfo>

using namespace std;

class Checker{
private:
    bool data[10];
    int cnt;
public:
    Checker();
    void set_data(int index);
    int get_count(){return cnt;}
    bool get_data(int index){return data[index];}
};

Checker::Checker():cnt(0)
{
    for(int i = 0; i < 10; i++){
        data[i] = false;
    }
}

void Checker::set_data(int index)
{
    data[index] = true;
    ++cnt;
}

int main()
{
    Checker check;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            char cmd[2] = {};
            cmd[0] = s[i];
            check.set_data(atoi(cmd));
        }
    }
    if(check.get_count()){
        for(int i = 0; i < 10; i++){
            if(check.get_data(i)){
                cout << i;
            }
        }
    }else {
        cout << "NO";
    }
    return 0;
}
