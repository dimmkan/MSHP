#include <iostream>
using namespace std;
int main()
{
    unsigned short x, y;
    cin >> x >> y;
    bool usl1=false, usl2=false, usl3=false;
    usl1 = (x >= 10 && x <= 20) && (y >= 5 && y <= 10);
    usl2 = (x >= 5 && x <= 15) && (y >= 10 && y <= 15);
    usl3 = (x >= 10 && x <= 20) && (y >= 15 && y <= 20);
    if(usl1 || usl2 || usl3){
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}
