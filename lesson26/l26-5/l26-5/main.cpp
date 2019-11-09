#include <iostream>
using namespace std;
int **get_array(int n){
    int **arr = new int* [n];
    for(int i = 0; i < n; i++){
        arr[i] = new int [n];
    }
    return arr;
}
void init_array(int **data, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> data[i][j];
        }
    }

}
void delete_array(int **data, int n){
    for(int i = 0; i < n; i++){
        delete[] data[i];
    }
    delete[] data;
}
int *get_diag(int **data, int n){
    int *diag_arr = new int[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                diag_arr[i] = data[i][j];
            }
        }
    }
    return diag_arr;
}
int main()
{
    int n;
    cin >> n;
    int **arr = get_array(n);
    init_array(arr, n);
    int *diag = get_diag(arr, n);
    for(int i = n-1; i >= 0; i--){
        cout << diag[i] << " ";
    }
    delete[] diag;
    delete_array(arr, n);
    return 0;
}
