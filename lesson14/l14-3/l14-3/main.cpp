#include <iostream>
using namespace std;
int main()
{
    short n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i%3 != 0){
            cout << i << " ";
        }
    }
    return 0;
}
