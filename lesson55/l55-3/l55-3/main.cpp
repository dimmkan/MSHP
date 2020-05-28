#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    set<string> set;
    while(cin >> s){
        set.insert(s);
    }
    cout << set.size();
    return 0;
}
