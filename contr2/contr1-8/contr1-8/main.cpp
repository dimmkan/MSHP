#include <iostream>
using namespace std;
int main()
{
    short a, b;
    cin >> a >> b;
    while(a != b){
        if (a/2 >= b && a%2 == 0){
           cout << ":2" << endl;
           a/=2;
        }else{
           cout << "-1" << endl;
           a-=1;
        }
    }
    return 0;
}
