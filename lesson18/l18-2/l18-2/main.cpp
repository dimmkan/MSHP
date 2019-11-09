#include <iostream>
using namespace std;

int main()
{
    short int arr[10] = {};
    int a, p;
    cin >> a >> p;
    arr[0] = a;
    for(int i = 1; i < 10; i++){
        a += p;
        arr[i] = a;
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
