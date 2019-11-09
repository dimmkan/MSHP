#include <iostream>
using namespace std;
int main()
{
    unsigned short int h;
    cin >> h;
    bool m = (8<=h && h<11);
    bool d = (11<=h && h<18);
    bool e = (18<=h && h<23);
    cout << m+d*2+e*3;
    return 0;
}
