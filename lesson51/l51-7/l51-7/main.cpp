#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    while (len > 3) {
        len -= 3;
        s.insert(len,",");
    }
    cout << s;
    return 0;
}
