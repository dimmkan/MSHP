#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    do{
        cin.get(ch);
        count += isdigit(ch) ? 1 : 0;
    }while(ch != '.');
    cout << count;
    return 0;
}
