#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n) {
    case 1:
        cout << "GOLD";
        break;
    case 2:
        cout << "SILVER";
        break;
    case 3:
        cout << "BRONZE";
        break;
    default:
        cout << "NO MEDAL";
        break;
    }
    return 0;
}
