#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, j = 0;
    double sum = 0.0;
    cin >> a >> b;
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; i++){
        sum += i;
        j++;
    }
    cout.precision(6);
    cout << fixed << sum / j;
    return 0;
}
