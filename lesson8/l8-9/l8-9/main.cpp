#include <iostream>
using namespace std;
int main()
{
    short a, b;
    cin >> a >> b;
    if (a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    while (a <= b) {
        cout << a << endl;
        a += 1;
    }
    return 0;
}
