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
bool pos_tab(int **data, int n, int m){
    bool global_flag = false;
    for(int j = 0; j < m; j++){
        bool tab_flag = true;
        for(int i = 0; i < n; i++){
            if(data[i][j] < 0){
                tab_flag = false;
            }
        }
        if(tab_flag) global_flag = true;
    }
    return global_flag;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = get_array(n, m);
    init_array(arr, n, m);
    pos_tab(arr, n, m) ? cout << "YES" : cout << "NO";
    delete_array(arr, n);
    return 0;
}
