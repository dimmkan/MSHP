#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if((abs(a/1000)>=1)&&(abs(a/1000)<=9)&&(a%5==0)){
        cout << "SUCCESS";
    }else {
       cout << "FAILURE";
    }
    return 0;
}
