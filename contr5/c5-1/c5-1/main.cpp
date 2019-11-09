#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    char str[101] = {};
    int i = 0, count = 0;
    cin.getline(str, 101);
    for(int i = 0; i < strlen(str); i++){
        count += (ispunct(str[i]?1:0));
    }
    cout << count;
    return 0;
}
