#include <iostream>
using namespace std;
int main()
{
    unsigned int y;
    cin >> y;
    bool flag = false;
    if(y%4 == 0){
        if(y%100 == 0){
            if(y%400 == 0){
                flag = true;
            }else {
                flag = false;
            }
        }else {
            flag = true;
        }
    }else {
        flag = false;
    }
    if(flag){
        cout << 366;
    }else {
        cout << 365;
    }
    return 0;
}
