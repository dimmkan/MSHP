#include <iostream>
using namespace std;
int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
    if (a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; i++){
        sum += i*i;
    }
    cout << sum;
    return 0;
}
