#include <iostream>
using namespace std;
int main()
{
    short n, count_0 = 0, count_1 = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 1){
            count_1++;
        }else {count_0++;}
    }
    cout << (count_0 > count_1 ? count_1 : count_0);
    return 0;
}
