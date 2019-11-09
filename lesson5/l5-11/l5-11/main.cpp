#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    bool obl1 = (x <= 2) && (y == 1);
    bool obl2 = x > 2;
    if(obl1 || obl2){
        cout << 1;
    }else {
        cout << 0;
    }
    return 0;
}
