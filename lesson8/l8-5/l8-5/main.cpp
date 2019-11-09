#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = n+1;
    while (i % 19 != 0){
        i += 1;
    }
    cout << i;
    return 0;
}
