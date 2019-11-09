#include <iostream>
using namespace std;
int main()
{
    short a, b, c;
    cin >> a >> b >> c;
    if(a > b){
        if (a > c){
            cout << 1;
        }else{
            cout << 3;
        }
    }else {
        if (b > c){
            cout << 2;
        }else {
            cout << 3;
        }
    }
    return 0;
}
