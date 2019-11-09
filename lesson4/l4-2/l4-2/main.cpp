#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a==b){
        a+=1;
        b+=2;
    }
    cout << a << ' ' << b;
    return 0;
}
