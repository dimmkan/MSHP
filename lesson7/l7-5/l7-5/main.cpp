#include <iostream>
using namespace std;
int main()
{
    short m;
    cin >> m;
    switch (m) {
    case 12:case 1:case 2:
        cout << "WINTER";
        break;
    case 3:case 4:case 5:
        cout << "SPRING";
        break;
    case 6:case 7:case 8:
        cout << "SUMMER";
        break;
    case 9:case 10:case 11:
        cout << "AUTUMN";
        break;
    default:
        break;
    }
    return 0;
}
