#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x) {
    case 1:
        cout << "Cyclop";
        break;
    case 2:
        cout << "Earthman";
        break;
    default:
        cout << "Multieye";
        break;
    }
    return 0;
}
