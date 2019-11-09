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
void search_max_in_rows(int **data, int n, int m){
    int min, max, i, j;
    for(int i = 0; i < n; i++){
        min = max = data[i][0];
        for(int j = 1; j < m; j++){
            if(data[i][j] < min){
                min = data[i][j];
            }
            if(data[i][j] > max){
                max = data[i][j];
            }
        }
        cout << max << " " << min << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = get_array(n, m);
    init_array(arr, n, m);
    search_max_in_rows(arr, n, m);
    delete_array(arr, n);
    return 0;
}
