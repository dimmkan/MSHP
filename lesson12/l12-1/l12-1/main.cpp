#include <iostream>
using namespace std;
int main()
{
    int a, max, max2;
    cin >> max;
    do{
        cin >> a;
        if(a != 0){
            if(a > max){
                max2 = max;
                max = a;
            }
            else if(a > max2){max2 = a;}
        }
    }while(a);
    cout << max2;
    return 0;
}
