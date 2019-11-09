#include <iostream>
using namespace std;
int main()
{
    short n;
    cin >> n;
    bool flag = false;
    for(int i=0; i < n; i++){
        short age, edu;
        cin >> age >> edu;
        if(!flag){
            bool usl1 = (age > 22 && age < 30);
            bool usl2 = (edu > 4);
            if(usl1 && usl2){
                flag = true;
            }
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}
