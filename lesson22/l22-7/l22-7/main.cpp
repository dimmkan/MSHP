#include <iostream>
using namespace std;
int read_array(int *A){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> *(A+i);
    }
    return n;
}
void print_array(int *A, int size){
    for(int i = 0; i < size; i++){
        cout << *(A+i) << " ";
    }
}
void delete_elem(int *A, int *size, int index){
    for(int i = index; i < *size; i++){
        *(A+i) = *(A+i+1);
    }
    *size -= 1;
}
void unique(int *A, int *size){
    for(int i = 0; i < *size - 1; i++){
        if( *(A+i) == *(A+i+1) ){
            delete_elem(A, size, i);
            i--;
        }
    }
}
int main()
{
    const int SZ = 100;
    int arr[SZ] = {};
    int size = read_array(arr);
    unique(arr, &size);
    print_array(arr, size);
    return 0;
}
