#include <iostream>
using namespace std;
int main()
{
    short int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a <= 10){
        cout << "YES";
    }else {
        if(b >= c && d==1){
            cout << "YES";
        }else {
            cout << "NO";
        }
    }
    return 0;
}
