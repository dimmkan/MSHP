#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class Set{
    int cnt;
    int *data;
public:
    Set(): cnt(0), data(nullptr){}
    void add(int);
    char* present(int);
    int count();
    bool in_array(int);
};

void Set::add(int k)
{
    if(!in_array(k)){
        int *tmp_data = new int[cnt+1];
        for(int i = 0; i < cnt; i++){
            tmp_data[i] = data[i];
        }
        tmp_data[cnt] = k;
        delete [] data;
        data = tmp_data;
        ++cnt;
        sort(data, data+cnt);
    }
}

char *Set::present(int k)
{
    if(in_array(k)){
            return "YES";
    }
    return "NO";
}

int Set::count()
{
    return cnt;
}

bool Set::in_array(int k)
{
    return binary_search(data, data+cnt, k);
}

int main()
{
    int x;
    Set s;
    cin >> x;
    for(int i = 0; i < x; i++){
        char cmd[8] = {};
        cin >> cmd;
        if(!strcmp(cmd, "ADD")){
            int tmp;
            cin >> tmp;
            s.add(tmp);
        }else if(!strcmp(cmd, "PRESENT")){
            int tmp;
            cin >> tmp;
            cout << s.present(tmp) << endl;
        }else if(!strcmp(cmd, "COUNT")){
            cout << s.count() << endl;
        }else{
            return -1;
        }
    }
    return 0;
}
