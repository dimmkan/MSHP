#include <iostream>
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
void get_winner(int **data, int n){
    int sum_major = 0, sum_minor = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                sum_major += data[i][j];
            }
            if(i+j == n-1){
                sum_minor += data[i][j];
            }
        }
    }
    if(sum_major == sum_minor){
        cout << "DRAW";
    }else{
        if(sum_major > sum_minor){
            cout << "GENA";
        }else{cout << "CHEBURASHKA";}
    }
}
int main()
{
    int n;
    cin >> n;
    int **arr = get_array(n);
    init_array(arr, n);
    get_winner(arr, n);
    delete_array(arr, n);
    return 0;
}
