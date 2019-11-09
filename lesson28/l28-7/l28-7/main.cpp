#include <iostream>
using namespace std;
void shiftArray(int arr[100], int size, int pos){
    int tmp = arr[size-1];
    for(int i = size-1; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = tmp;
}
int main()
{
    int arr[100], n, pos;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> pos;
    shiftArray(arr, n, pos-1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
