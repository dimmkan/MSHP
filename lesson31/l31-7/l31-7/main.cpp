#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    do{
        cin.get(ch);
        if(isupper(ch)){
            cout << tolower(ch);
        }else{
            cout << ch;
        }
    }while(ch != '.');
    return 0;
}
