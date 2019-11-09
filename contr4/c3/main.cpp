#include <iostream>
using namespace std;
int **get_array(int n){
    int **arr = new int* [n];
    for(int i = 0; i < n; i++){
        arr[i] = new int [n];
    }
    return arr;
}
void delete_array(int **data, int n){
    for(int i = 0; i < n; i++){
        delete[] data[i];
    }
    delete[] data;
}
void init_array(int **data, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> data[i][j];
        }
    }

}
void get_res(int **data, int n){
    int *res_arr = new int[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j && data[i][j] > 0){
                res_arr[cnt++] = data[i][j];
            }
        }
    }
    if(cnt == 0){
        cout << "No such elements";
    }else{
        for(int i = 0; i < cnt; i++){
            cout << res_arr[i] << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int **arr = get_array(n);
    init_array(arr, n);
    get_res(arr, n);
    delete_array(arr, n);
    return 0;
}
