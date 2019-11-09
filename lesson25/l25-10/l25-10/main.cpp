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
bool check_tables(int **data, int n){
    int sum = 0;
    int res = true;
    for(int i = 0; i < n; i++){
        sum += data[i][0];
    }
    for(int j = 1; j < n; j++){
        int act_sum = 0;
        for(int i = 0; i < n; i++){
            act_sum += data[i][j];
        }
        if(sum != act_sum){
            res = false;
        }
    }
    return res;
}
bool check_rows(int **data, int n){
    int sum = 0;
    int res = true;
    for(int j = 0; j < n; j++){
        sum += data[0][j];
    }
    for(int i = 1; i < n; i++){
        int act_sum = 0;
        for(int j = 0; j < n; j++){
            act_sum += data[i][j];
        }
        if(sum != act_sum){
            res = false;
        }
    }
    return res;
}
int get_sum_tables(int **data, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += data[i][0];
    }
    return sum;
}
int get_sum_rows(int **data, int n){
    int sum = 0;
    for(int j = 0; j < n; j++){
        sum += data[0][j];
    }
    return sum;
}
int get_sum_minor(int **data, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i+j == n-1) sum += data[i][j];
        }
    }
    return sum;
}
int get_sum_major(int **data, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) sum += data[i][j];
        }
    }
    return sum;
}
bool check_array(int **data, int n){
    bool res = false;
    int sum_tables, sum_rows, sum_minor, sum_major;
    if(!check_tables(data, n)){
        return false;
    }else{
        sum_tables = get_sum_tables(data, n);
    }
    if(!check_rows(data, n)){
        return false;
    }else{
        sum_rows = get_sum_rows(data, n);
    }
    sum_minor = get_sum_minor(data, n);
    sum_major = get_sum_major(data, n);
    if((sum_major == sum_minor) && (sum_major== sum_rows) && (sum_major == sum_tables)){
        res = true;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int **arr = get_array(n);
    init_array(arr, n);
    check_array(arr, n) ? cout << "YES" : cout << "NO";
    delete_array(arr, n);
    return 0;
}
