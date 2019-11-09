#include <iostream>
using namespace std;
int main()
{
    int n, tmp, count = 0;
    cin >> n;
    tmp = n;
    do{
        cin >> n;
        if(n > tmp){
            count++;
        }
        tmp = n;
    }while(n != 0);
    cout << count;
    return 0;
}
