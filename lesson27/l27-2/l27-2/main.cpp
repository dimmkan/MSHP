#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a > b && a > c){
        a -= 5;
    }else{
        if(b > a && b > c){
            b -= 5;
        }else{
            c -= 5;
        }
    }
    cout << a << " " << b << " " << c;
    return 0;
}
