#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string cmd;
        cin >> cmd;
        if(cmd == "COUNT"){
            cout << s.size() << endl;
        }else {
            int tmp;
            cin >> tmp;
            if(cmd == "ADD"){
                s.insert(tmp);
            }else{
                cout << (s.count(tmp)?"YES":"NO") << endl;
            }
        }
    }
    return 0;
}
