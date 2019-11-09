#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {};
    int a, p;
    cin >> a >> p;
    arr[0] = a;
    for(int i = 1; i < 7; i++){
        a *= p;
        arr[i] = a;
    }
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
