#include <iostream>
using namespace std;
int main()
{
    int n;
    bool flag = false;
    cin >> n;
    do{
        int tmp = n % 10;
        if(tmp == 0){
            flag = (flag) ? true : false;
        }else{
            flag = true;
        }
        if(flag){cout << tmp;}
        n /= 10;
    }while(n > 0);
    return 0;
}
