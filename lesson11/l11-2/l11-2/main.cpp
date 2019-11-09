#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    do{
        n /= 10;
        i++;
    }while(n > 0);
    cout << i;
    return 0;
}
