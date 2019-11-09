#include <iostream>
using namespace std;
int **get_array(int n, int m){
    int **arr = new int* [n];
    for(int i = 0; i < n; i++){
        arr[i] = new int [m];
    }
    return arr;
}
void delete_array(int **data, int n){
    for(int i = 0; i < n; i++){
        delete[] data[i];
    }
    delete[] data;
}
void init_array(int **data, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> data[i][j];
        }
    }

}
int **get_res_array(int **data, int **data1, int n, int m){
    int **res_array = get_array(n, m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res_array[i][j] = data[i][j] + data1[i][j];
        }
    }
    return res_array;
}
void print_array(int **data, int n, int m){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = get_array(n, m);
    int **arr1 = get_array(n, m);
    init_array(arr, n, m);
    init_array(arr1, n, m);
    int **res_arr = get_res_array(arr, arr1, n, m);
    print_array(res_arr, n, m);
    delete_array(arr, n);
    delete_array(arr1, n);
    delete_array(res_arr, n);
    return 0;
}
