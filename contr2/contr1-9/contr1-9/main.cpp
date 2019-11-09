#include <iostream>
using namespace std;
int main()
{
    int n, k, min1 = 30000, min2 = 30000;
    long long int max1 = -30000, max2 = -30000, max3 = -30000;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k;
        if(k > max1){
            max3 = max2;
            max2 = max1;
            max1 = k;
        }else if(k > max2){
            max3 = max2;
            max2 = k;


        }else if(k > max3){

            max3 = k;
        }
        if (k < min1){
            min2 = min1;
            min1 = k;
        }else if(k < min2){
            min2 = k;
        }
    }
    if( (max1 > 0) && (min1*min2 > max2*max3)){
        cout << max1 << ' ' << min1 << ' ' << min2;
    }else
        cout << max1 << ' ' << max2 << ' ' << max3;
    return 0;
}
