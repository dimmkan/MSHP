#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if(((x >= -5) && (x <= 1)) || ((x >= 7) && (x <= 13))){
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}
