#include <iostream>
using namespace std;
int main()
{
    int n, d, count = 0;
    cin >> n >> d;
    if(n < 0){
        n *= -1;
    }
    do{
        int k = n % 10;
        if(k == 3){
            count++;
        }
        n /= 10;
    }while(n);
    if(count == 3 && d){
        cout << "YES";
    }else if(!(count == 3) && !d){
        cout << "YES";
    }else cout << "NO";
    return 0;
}
