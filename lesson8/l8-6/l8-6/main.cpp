#include <iostream>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int max = 0;
    int i = 0;
    while(i <= n){
        if(i % d == 0){
            max = (i > max) ? i : max;
        }
        i += 1;
    }
    cout << max;
    return 0;
}
