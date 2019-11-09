#include <fstream>
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    fstream f;

    int count = 0;
    char str[10001] = {};
    f.open("numbers.txt", ios::in);
    while(f.getline(str, 10001, '\n')){
        for(int i = 0; i < strlen(str); i++){
            if(isdigit(str[i])){
                count++;
                do{
                    i++;
                }while(isdigit(str[i]) && i < strlen(str));
            }
        }
    }
    cout << count;
    return 0;
}
