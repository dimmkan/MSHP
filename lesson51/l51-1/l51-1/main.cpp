#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string s;
    int count = 0;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])) count++;
    }
    cout << count;
    return 0;
}
