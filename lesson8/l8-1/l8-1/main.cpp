#include <iostream>
using namespace std;
int main()
{
    short a;
    short i = 0;
    while (i < 10){
        cin >> a;
        cout << (a*a) << " " << (a*4) << endl;
        i += 1;
    }
    return 0;
}
