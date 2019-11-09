#include <iostream>
using namespace std;
int main()
{
    int n, k = 0, count = 0;
    cin >> n;
    do{
        k = n % 10;
        if(k == 6){
            count++;
        }
        n /= 10;
    }while(n > 0);
    cout << ((count > 1) ? "YES" : "NO");
    return 0;
}
