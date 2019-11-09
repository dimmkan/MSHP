#include <iostream>

using namespace std;

void init_array(int* arr, int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
void bubblesort(int* A, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(A[i] > A[j]){
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }
}
bool is_permutation(int* A, int* B, int size){
    bubblesort(A, size);
    bubblesort(B, size);
    bool flag = true;
    for(int i = 0; i < size; i++){
        if(A[i] != B[i]){
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int size;
    cin >> size;
    int* arr1 = new int[size];
    int* arr2 = new int[size];
    init_array(arr1, size);
    init_array(arr2, size);
    cout << (is_permutation(arr1, arr2, size)?"YES":"NO");
    return 0;
}
