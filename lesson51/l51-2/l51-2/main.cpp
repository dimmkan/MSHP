#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int pos;
    cin >> s;
    pos = s.find_first_of("o");
    if(pos != -1) s.erase(pos, 1);
    cout << s;
    return 0;
}
