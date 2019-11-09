#include <iostream>
using namespace std;
int main()
{
    int k, sum = 0;
    short n, count = 0;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> k;
        if(k > 1000){
            sum += k;
            count++;
        }
    }
    cout << count << " " << sum;
    return 0;
}
