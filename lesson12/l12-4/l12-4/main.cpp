#include <iostream>
using namespace std;
int main()
{
    int a, b, c, count=0;
    cin >> a >> b;
    do{
        cin >> c;
        if(c != 0){
            if(b > a && b > c){count++;}
            a = b;
            b = c;
        }
    }while(c);
    cout << count;
    return 0;
}
