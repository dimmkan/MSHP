#include <iostream>
using namespace std;
int main()
{
    int count = 0, n;
    cin >> n;
    while(n != 0){
       count += 1;
       cin >> n;
    }
    cout << count;
    return 0;
}
