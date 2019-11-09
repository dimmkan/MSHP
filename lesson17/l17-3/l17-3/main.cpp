#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; i++){
        int res = 0;
        for(int j = 1; j <= i; j++){
            if(i%j == 0){
                res++;
            }
        }
        cout << res << " ";
    }
    return 0;
}
