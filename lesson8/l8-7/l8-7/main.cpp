#include <iostream>
using namespace std;
int main()
{
    int a;
    short i = 0;
    while (i < 10) {
        cin >> a;
        cout << (a * a * 2) << endl;
        i += 1;
    }
    return 0;
}
