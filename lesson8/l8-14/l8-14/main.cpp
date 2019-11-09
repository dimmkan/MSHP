#include <iostream>
using namespace std;
int main()
{
    int d, l;
    cin >> d >> l;
    int i = 0;
    while(i < 15){
        if(l % d == 0){
            cout << l << " ";
            l += 1;
            i += 1;
        }else {
            l += 1;
        }
    }
    return 0;
}
