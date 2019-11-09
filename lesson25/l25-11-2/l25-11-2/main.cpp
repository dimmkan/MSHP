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
void print_array(int **data, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

}
void fill_border(int **data, int n , int m, int border, int *current_value){
    for(int i = 0 + border; i < m-border; i++){
        if(data[border][i] == 0){
            data[border][i] = (*current_value)++;
        }
    }
    for(int i = 1 + border; i < n-border; i++){
        if(data[i][m-1-border] == 0){
            data[i][m-1-border] = (*current_value)++;
        }
    }
    for(int i = m - 2 - border; i >= 0+border; i--){
        if(data[n - 1 - border][i] == 0){
            data[n - 1 - border][i] = (*current_value)++;
        }
    }
    for(int i = n - 2 - border; i >= 1+border; i--){
        if(data[i][border] == 0){
            data[i][border] = (*current_value)++;
        }
    }
}
int main()
{
    int n, m, current_value = 1;
    cin >> n;
    m = n;
    int **arr = get_array(n, m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           arr[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        fill_border(arr, n, m, i/2, &current_value);
    }
    print_array(arr, n, m);
    delete_array(arr, n);
    return 0;
}
