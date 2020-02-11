#include <iostream>
#include <regex>

using namespace std;

int main()
{
    char ip[16];
    cin >> ip;
    regex reg( "(([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\.){3}([01]?\\d\\d?|2[0-4]\\d|25[0-5])" );
    if (regex_match( ip, reg ))
        cout << true;
    else
        cout << false;
    return 0;
}
