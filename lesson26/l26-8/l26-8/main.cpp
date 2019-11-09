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
void equalize(int **data, int n, int **data2, int m){
    int sum_1 = 0, sum_2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                sum_1 += data[i][j];
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(i == j){
                sum_2 += data2[i][j];
            }
        }
    }
    if(sum_1 == sum_2){
        cout << "equal";
    }else{
        if(sum_1 > sum_2){
            cout << "greater";
        }else{
            cout << "less";
        }
    }
}
int main()
{
    int n, m;
    cin >> n;
    int **arr = get_array(n);
    init_array(arr, n);
    cin >> m;
    int **arr2 = get_array(m);
    init_array(arr2, m);
    equalize(arr, n, arr2, m);
    delete_array(arr, n);
    delete_array(arr2, m);
    return 0;
}
