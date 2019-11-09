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
int **get_new_array(int **data, int n, int m){
    int **new_array = get_array(n, m);
    for(int i = 0; i < n-1; i += 2){
        for(int j = 0; j < m; j++){
            new_array[i+1][j] = data[i][j];
            new_array[i][j] = data[i+1][j];
        }
    }
    return new_array;
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
    init_array(arr, n, m);
    int **new_arr = get_new_array(arr, n, m);
    print_array(new_arr, n, m);
    delete_array(arr, n);
    return 0;
}
