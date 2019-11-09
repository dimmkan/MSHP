#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {};
    int n, i = 0;
    cin >> n;
    do{
        arr[i] = n%10;
        n /= 10;
        i++;
    }while(n);
    for(int j = 0; j < i; j++){
        cout << arr[j] << " ";
    }
    return 0;
}
