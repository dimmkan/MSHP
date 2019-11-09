#include <iostream>
using namespace std;
int main()
{
    int a, max, count;
    cin >> max;
    count = 1;
    do{
        cin >> a;
        if(a){
            if(a == max){
                count++;
            }else if(a > max){
                max = a;
                count = 1;
            }
        }
    }while(a);
    cout << count;
    return 0;
}
