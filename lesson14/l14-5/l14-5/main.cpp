#include <iostream>
using namespace std;
int main()
{
    short x;
    cin >> x;
    while(x >= 50){
        cout << x << endl;
        x -= 5;
    }
    return 0;
}
