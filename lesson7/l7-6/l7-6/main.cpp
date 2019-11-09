#include <iostream>
using namespace std;
int main()
{
    short t;
    cin >> t;
    switch (t%6) {
    case 0:case 1:case 2:
        cout << "GREEN";
        break;
    case 3:
        cout << "YELLOW";
        break;
    case 4:case 5:
        cout << "RED";
        break;
    default:
        break;
    }
    return 0;
}
