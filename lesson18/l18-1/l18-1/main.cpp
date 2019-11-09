#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {};
    int n;
    cin >> n;
    int tmp_n = n;
    for(int i = 0; i < n; i++){
        arr[i] = tmp_n;
        tmp_n -= 1;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
