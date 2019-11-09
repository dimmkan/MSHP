#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    short n, k1 = 0, k2 = 0, k3 = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int p;
        cin >> p;
        if(p > 0){
            k1++;
        }else{
            if(p < 0){
                k2++;
            }else {k3++;}
        }
        sum += p;
    }
    cout << k1 << " " << k2 << " " << k3 << endl;
    cout << sum;
    return 0;
}
