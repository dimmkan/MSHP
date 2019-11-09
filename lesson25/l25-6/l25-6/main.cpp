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
bool pos_row(int **data, int n, int m){
    bool global_flag = false;
    for(int i = 0; i < n; i++){
        bool row_flag = true;
        for(int j = 0; j < m; j++){
            if(data[i][j] < 0){
                row_flag = false;
            }
        }
        if(row_flag) global_flag = true;
    }
    return global_flag;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = get_array(n, m);
    init_array(arr, n, m);
    pos_row(arr, n, m) ? cout << "YES" : cout << "NO";
    delete_array(arr, n);
    return 0;
}
