#include <iostream>

using namespace std;

int main()
{
    short int k, d;
    cin >> k >> d;
    switch ((k+d)%7 - 1) {
    case 0:
        cout << 7;
        break;
    default:
        cout << (k+d)%7 - 1;
        break;
    }
    return 0;
}
