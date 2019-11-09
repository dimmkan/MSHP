#include <iostream>
using namespace std;
int main()
{
    int a;
    short i = 0;
    while (i < 10) {
        cin >> a;
        a = (a < 0)? (a * -1) : a;
        cout << (a + 25) << endl;
        i += 1;
    }
    return 0;
}
