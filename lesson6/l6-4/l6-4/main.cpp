#include <iostream>
using namespace std;
int main()
{
    short int x1, y1, x2, y2, ch1, ch2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1>0){
        if(y1>0){
            ch1 = 1;
        }else {
            ch1 = 4;
        }
    }else {
        if(y1>0){
            ch1 = 2;
        }else {
            ch1 = 3;
        }
    }
    if(x2>0){
        if(y2>0){
            ch2 = 1;
        }else {
            ch2 = 4;
        }
    }else {
        if(y2>0){
            ch2 = 2;
        }else {
            ch2 = 3;
        }
    }
    if(ch1 == ch2){
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}
