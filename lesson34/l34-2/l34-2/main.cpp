#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    fstream f;
    f.open("in.txt", ios::in);
    int count = 0;
    char ch;
    while(f.get(ch)){
        count += (!isspace(ch) ? 1 : 0);
    }
    f.close();
    cout << count;
    return 0;
}
