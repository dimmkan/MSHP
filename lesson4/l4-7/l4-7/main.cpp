#include <iostream>
using namespace std;
int main()
{
    int a, b, c, res=0;
    cin >> a >> b >> c;
    if(a>0){
       res+=a;
    }
    if(b>0){
        res+=b;
    }
    if(c>0){
        res+=c;
    }
    cout << res;
    return 0;
}
