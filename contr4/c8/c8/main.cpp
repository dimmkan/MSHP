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
void search(int **data, int n, int m){
    int max = data[0][0];
    int i_max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (data[i][j] > max){
                max = data[i][j];
                i_max = i;
            }
        }
    }
    cout << i_max;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = get_array(n, m);
    init_array(arr, n, m);
    search(arr, n, m);
    delete_array(arr, n);
    return 0;
}
