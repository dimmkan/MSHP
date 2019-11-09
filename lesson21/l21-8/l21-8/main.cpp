#include <iostream>

using namespace std;

void readArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int controlNonNull(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            count++;
        }
    }
    return count;
}

void swapArray(int arr[], int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void sortArray(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                swapArray(arr, i, j);
            }
        }
    }
}

void mergeArrays(int arr1[], int arr2[], int arr3[], int n1, int n2){
    for(int i = 0; i < n1; i++){
        arr3[i] = arr1[i];
    }
    for(int i = 0; i < n2; i++){
        arr3[i+n1] = arr2[i];
    }
}

int main()
{
    const int SZ = 200;
    int arr1[SZ] = {};
    int arr2[SZ] = {};
    int arr3[SZ] = {};
    int n1, n2, n3;
    cin >> n1;
    readArray(arr1, n1);
    cin >> n2;
    readArray(arr2, n2);
    n3 = n1+n2;
    mergeArrays(arr1, arr2, arr3, n1, n2);
    sortArray(arr3, n3);
    cout << controlNonNull(arr1, n1) << " " << controlNonNull(arr2, n2) << endl;
    printArray(arr3, n3);
    return 0;
}
