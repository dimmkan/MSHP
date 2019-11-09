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
void search_max(int **data, int m){
    int min = data[3][0];
    int min_index = 0;
    for(int j = 1; j < m; j++){
        if(data[3][j] < min){
            min = data[3][j];
            min_index = j;
        }
    }
    cout << min_index+1;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = get_array(n, m);
    init_array(arr, n, m);
    search_max(arr, m);
    delete_array(arr, n);
    return 0;
}
