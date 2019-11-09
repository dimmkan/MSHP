#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    bool pr1 = (x >= -1 && x <= 2) && (y >= 3 && y <= 4);
    bool pr2 = (x >= 1 && x <= 4) && (y >= 2 && y <= 7);
    if(pr1 || pr2){
        cout << 1;
    }else {
        cout << 0;
    }
    return 0;
}
