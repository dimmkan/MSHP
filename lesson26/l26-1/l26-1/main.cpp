#include <iostream>
using namespace std;
int sign(int a){
    if(a == 0){
        return 0;
    }else{
        if(a > 0){
            return 1;
        }
        else{return -1;}
    }
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << sign(x) + sign(y);
    return 0;
}
