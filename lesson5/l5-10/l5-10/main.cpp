#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    bool obl1 = (y > 0) && (x > 2);
    bool obl2 = (y < -1) && (x > 1);
    if(obl1 || obl2){
        cout << 1;
    }else {
        cout << 0;
    }
    return 0;
}
