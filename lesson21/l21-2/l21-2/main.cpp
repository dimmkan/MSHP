#include <iostream>
using namespace std;

int min(int x, int y){
    if(x > y){
        return y;
    }else {
        return x;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    long long int res1 = min(a, 3*b);
    long long int res2 = min(2*a-b, 2*b);
    long long int z = res1 * res2;
    cout << z;
    return 0;
}
