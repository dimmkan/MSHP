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
int find_arr_sum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
void get_res_arr(int *arr, int *res_arr, int n){
    for(int i = 0; i < n; i++){
        res_arr[i] = arr[i];
    }
}
void find_min_row(int **data, int n, int m){
    int *str_arr = new int[m];
    int *res_arr = new int[m];
    int min_row_sum;
    for(int j = 0; j < m; j++){
        str_arr[j] = data[0][j];
    }
    get_res_arr(str_arr, res_arr, m);
    min_row_sum = find_arr_sum(str_arr, m);
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            str_arr[j] = data[i][j];
        }
        int act_sum = find_arr_sum(str_arr, m);
        if (act_sum < min_row_sum){
            min_row_sum = act_sum;
            get_res_arr(str_arr, res_arr, m);
        }

    }
    for(int i = 0; i < m; i++){
        cout << res_arr[i] << " ";
    }
    delete[] str_arr;
    delete[] res_arr;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = get_array(n, m);
    init_array(arr, n, m);
    find_min_row(arr, n, m);
    delete_array(arr, n);
    return 0;
}
