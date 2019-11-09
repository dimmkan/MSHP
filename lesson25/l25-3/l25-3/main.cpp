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
int find_max(int **data, int n){
    int max = data[0][2];
    int num = 1;
    for(int i = 1; i < n; i++){
        if(data[i][2] >= max){
            max = data[i][2];
            num = i+1;
        }
    }
    return num;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = get_array(n, m);
    init_array(arr, n, m);
    cout << find_max(arr, n);
    delete_array(arr, n);
    return 0;
}
