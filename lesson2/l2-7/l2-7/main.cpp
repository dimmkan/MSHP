#include <iostream>

using namespace std;

int main()
{
    short int k;
    cin >> k;
    switch (k%7) {
    case 0:
        cout << 7;
        break;
    default:
        cout << k%7;
        break;
    }
    return 0;
}
