#include <iostream>
using namespace std;
int main()
{
    unsigned short int x,d;
    unsigned int k;
    cin >> x >> d >> k;
    cout << (x-k%x+d-1)%x+1;
    return 0;
}
