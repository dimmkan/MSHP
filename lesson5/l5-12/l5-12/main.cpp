#include <iostream>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;
    bool GHMN = ((x*x+y*y<16) && (x > 0));
    bool LMQR = ((y > x*x-6) && (y < 0));
    bool FGLM = ((x*x + y*y < 16) && (y > x*x-6));
    if (FGLM || LMQR || GHMN){
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}
