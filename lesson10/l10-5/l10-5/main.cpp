#include <iostream>
using namespace std;
int main()
{
    int a, tmp = -1;
    bool flag = false;
    do{
        cin >> a;
        if(tmp == a){
            flag = true;
        }
        tmp = a;
    }while (a != -1);
    cout << (flag ? "YES" : "NO");
    return 0;
}
