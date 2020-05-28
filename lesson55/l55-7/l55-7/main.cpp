#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    string cmd;
    for(int i = 0; i < n; i++){
        cin >> cmd;
        if(cmd == "+"){
            int tmp;
            cin >> tmp;
            s.insert(tmp);
        }else {
            int tmp;
            cin >> tmp;
            cout << (s.find(tmp) == s.end() && s.find(tmp+1) == s.end() ? -1 : *min_element(s.find(tmp), s.find(tmp+1))) << endl;
        }
    }
    return 0;
}
