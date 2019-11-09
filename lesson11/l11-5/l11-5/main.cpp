#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    do{
        int tmp = n % 10;
        if(tmp == k){
            count++;
        }
        n /= 10;
    }while(n > 0);
    cout << count;
    return 0;
}
