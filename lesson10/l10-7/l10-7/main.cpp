#include <iostream>
using namespace std;
int main()
{
    int n, a, min, max, i = 0;
    cin >> n;
    cin >> a;
    min = a;
    max = a;
    do{
        cin >> a;
        min = (min < a) ? min : a;
        max = (max > a) ? max : a;
        i++;
    }while(i < n-1);
    cout << max - min;
    return 0;
}
