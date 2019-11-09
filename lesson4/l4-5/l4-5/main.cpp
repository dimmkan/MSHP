#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if(abs(n) > abs(m)){
        n-=100;
    }
    cout << n << " " << m;
    return 0;
}
