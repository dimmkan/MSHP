#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    bool o1, o2, o3;
    o1 = (x >= -5) && (x <= -3);
    o2 = (x >= -1) && (x <= 1);
    o3 = (x >= 3) && (x <= 5);
    if (o1 || o2 || o3){
        cout << 1;
    }else {
        cout << 0;
    }
    return 0;
}
