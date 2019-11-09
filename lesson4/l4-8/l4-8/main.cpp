#include <iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cin >> a >> b >> c;
    //Найдем максимальное из трех
    max = a;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    //Сравним каждое значение и отнимем 5
    if(a==max){
        a-=5;
    }
    if(b==max){
        b-=5;
    }
    if(c==max){
        c-=5;
    }
    cout << a << " " << b << " " << c;
    return 0;
}
