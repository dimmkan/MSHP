#include <iostream>
using namespace std;
int main()
{
    short a, b, c;
    cin >> a >> b >> c;
    while (a <= b) {
        if(a % c == 0){
            cout << a << " ";
        }
        a += 1;
    }
    return 0;
}
