#include <iostream>
using namespace std;

int main()
{
    char ch_arr[50];
    int count = 0;
    do{
        cin.get(ch_arr[count]);
    }while(ch_arr[count++] != '.');
    cout << "Hello, ";
    for(int i = 0; ch_arr[i] != '.'; i++){
        cout << ch_arr[i];
    }
    return 0;
}
