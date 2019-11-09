#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool usl1 = (a<=b)&&(b<=c);
    bool usl2 = (a>b)&&(b>c);
    bool def = (!usl1)&&(!usl2);
    if(def){
        a*=-1;
        b*=-1;
        c*=-1;
    }
    if(usl1){
        a*=a;
        b*=b;
        c*=c;
    }
    if(usl2){
       int max = a;
        if(max<b){
            max=b;
        }
        if(max<c){
            max=c;
        }
        a = max;
        b = max;
        c = max;
    }
    cout << a << ' ' << b << ' ' << c;
    return 0;
}
