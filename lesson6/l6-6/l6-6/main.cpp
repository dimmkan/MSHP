#include <iostream>
using namespace std;
int main()
{
    short int n;
    cin >> n;
    bool flag1 = false, flag2 = false;
    if(n%5==0){
        flag1 = true;
    }else {
        flag1 = false;
    }
    if(n%25==0){
        if(n%100==0){
            flag2 = true;
        } else{
            flag2 = false;
        }
    }else {
        flag2 = true;
    }
    if(flag1 && flag2){
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}
