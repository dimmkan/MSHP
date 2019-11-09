#include <iostream>
using namespace std;
void shiftArray(int arr[100], int n){
    int tmp = arr[n-1];
    for(int i = n-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = tmp;
}
void printArray(int arr[100], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    const int SZ = 100;
    int arr[SZ], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        printArray(arr, n);
        shiftArray(arr, n);
    }
    return 0;
}
