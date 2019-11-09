#include <iostream>
using namespace std;
int main()
{
    int n = 1, sum = 0;
    while(n != 0){
        cin >> n;
        if (n != 0){
            if (n % 2 != 0){
                sum += n;
            }
        }
    }
    cout << sum;
    return 0;
}
