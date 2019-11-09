#include <iostream>
using namespace std;
int main()
{
    short n, m, count = 0, i = 0;
    cin >> n;
    do{
        cin >> m;
        if(m == 5){
            count++;
        }
        i++;
    }while(i < n);
    cout << count;
    return 0;
}
