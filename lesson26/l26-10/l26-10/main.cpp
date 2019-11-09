#include <iostream>
#include <cmath>
using namespace std;
int **get_array(int n){
    int **arr = new int* [n];
    for(int i = 0; i < n; i++){
        arr[i] = new int [n];
    }
    return arr;
}
void init_array(int **data, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> data[i][j];
        }
    }

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
bool is_prime(int n){
    bool prime = true;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            prime = false;
        }
    }
    return prime;
}
int **get_result(int **data, int n, int x, int y){
    int **res_arr = new int* [n];
    for(int i = 0; i < n; i++){
        res_arr[i] = new int [8];
    }
    for(int j = 0; j < 8; j++){
        for(int i = 0; i < n; i++){
            res_arr[i][j] = 0;
        }
    }
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            if((data[i][j]%x == 0) || (data[i][j]%y == 0)){
                res_arr[j][0] += 1;
                res_arr[j][1] += data[i][j];
            }
            if((data[i][j] >= x) && (data[i][j] <= y)){
                res_arr[j][2] += 1;
                res_arr[j][3] += data[i][j];
            }
            if((data[i][j] > 1) && is_prime(data[i][j])){
                res_arr[j][4] += 1;
                res_arr[j][5] += data[i][j];
            }
            if((data[i][j] > 0) && (i < j)){
                res_arr[j][6] += 1;
                res_arr[j][7] += data[i][j];
            }
        }
    }
    return res_arr;
}
int main()
{
    int n, x, y;
    cin >> n;
    int **arr = get_array(n);
    init_array(arr, n);
    cin >> x >> y;
    int **res = get_result(arr, n, x, y);
    print_array(res, n, 8);
    delete_array(arr, n);
    delete_array(res, n);
    return 0;
}
