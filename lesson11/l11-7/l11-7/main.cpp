#include <iostream>
using namespace std;
int main()
{
    int n, count_0 = 0, count_9 = 0;
    cin >> n;
    do{
        int tmp = n % 10;
        if(tmp == 0){
            count_0++;
        }
        if(tmp == 9){
            count_9++;
        }
        n /= 10;
    }while(n > 0);
    cout << ((count_0 > count_9) ? 0 : 9);
    return 0;
}
