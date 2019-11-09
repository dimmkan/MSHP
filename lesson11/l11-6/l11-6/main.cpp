#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, sum_low = 0, sum_high = 0;
    cin >> n;
    do{
        int tmp = n % 10;
        if(count < 3){
            sum_low += tmp;
        }else{
            sum_high += tmp;
        }
        count++;
        n /= 10;
    }while(n > 0);
    cout << ((sum_low == sum_high) ? "YES" : "NO");
    return 0;
}
