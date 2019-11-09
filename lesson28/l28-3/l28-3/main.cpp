#include <iostream>
using namespace std;
int main()
{
    const int SZ = 100;
    int arr[SZ], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i+=2){
        int tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
