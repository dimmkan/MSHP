#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class Set{
    int cnt;
    int data[10000000];
public:
    Set(): cnt(0){}
    void add(int);
    bool present(int);
    int count();
    bool in_array(int);
};

void Set::add(int k)
{
    if(!present(k)){
        data[cnt++] = k;
    }
}

bool Set::present(int k)
{
    for(int i = 0; i < cnt; i++){
        if(data[i] == k) return true;
    }
    return false;
}

int Set::count()
{
    return cnt;
}

int main()
{
    int x, tmp;
    Set s;
    cin >> x;
    for(int i = 0; i < x; i++){
        char cmd[8] = {};
        cin >> cmd;
        if(!strcmp(cmd, "COUNT")){
            cout << s.count() << endl;
        }else {
            if(!strcmp(cmd, "ADD")){
                cin >> tmp;
                s.add(tmp);
            }else if(!strcmp(cmd, "PRESENT")){
                cin >> tmp;
                cout << (s.present(tmp) ? "YES" : "NO") << endl;
            }
        }
    }
    return 0;
}
