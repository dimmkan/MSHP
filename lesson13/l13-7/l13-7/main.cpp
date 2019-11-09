#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int min = n % 10;
    int count = 1;
    n /= 10;
    do{
        int tmp = n % 10;
        if(tmp == min){
            count++;
        }else if(tmp < min){
            min = tmp;
            count = 1;
        }
        n /= 10;
    }while(n);
    cout << count;
    return 0;
}
