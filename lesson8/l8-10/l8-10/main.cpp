#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b){
        while (a <= b) {
            cout << a << endl;
            a += 1;
        }
    }else {
        while (a >= b) {
            cout << a << endl;
            a -= 1;
        }
    }
    return 0;
}
