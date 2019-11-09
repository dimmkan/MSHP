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
void print_array(int **data, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}
void refresh_array(int **data, int n, int m){
    int max;
    for(int i=0; i<n; i++){
        max = abs(data[i][0]);
        int p = 0;
        for(int j=0; j<m; j++){
            if (abs(data[i][j])>=max){
                p = j;
                max = abs(data[i][j]);
                data[i][p]=-data[i][p];
            }
        }

    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = get_array(n, m);
    init_array(arr, n, m);
    refresh_array(arr, n, m);
    print_array(arr, n, m);
    delete_array(arr, n);
    return 0;
}


