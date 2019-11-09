#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    switch (n) {
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
