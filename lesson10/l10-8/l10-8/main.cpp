#include <iostream>
using namespace std;
int main()
{
    int x=0, y=0, i=0, n, m;
    cin >> n;
    do{
        cin >> m;
        x += i+1;
        y += m;
        i++;
    }while(i < n-1);
    x += n;
    cout << x-y;
    return 0;
}
