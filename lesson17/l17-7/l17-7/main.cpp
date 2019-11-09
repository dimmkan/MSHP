#include <iostream>

using namespace std;

int main()
{
    int n,r10,r5,r2,res;
    cin >> n;
    res = 0;
    for (r10=0; r10<=n / 10; r10++){
        for (r5=0; r5<=(n-10*r10) / 5; r5++) {
            for (r2=0; r2<=(n-10*r10-5*r5) / 2; r2++) {
                res++;
            }
        }
    }
    cout << res;
    return 0;

}
