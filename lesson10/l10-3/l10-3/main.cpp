#include <iostream>
using namespace std;
int main()
{
    int n, max = 0;
    do{
      cin >> n;
      max = (max > n) ? max : n;
    } while(n != 0);
    cout << max;
    return 0;
}
