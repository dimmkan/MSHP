#include <iostream>
using namespace std;
int main()
{
    int a, b, c, nod;
    cin >> a >> b >> c;
    while(b != c){
        if (b>c){
            b -= c;
        }else{
            c -= b;
        }
    }
    nod = b;
    while(a != nod){
        if (a > nod){
            a -= nod;
        }else{
            nod -= a;
        }
    }
    cout << a;
    return 0;
}
