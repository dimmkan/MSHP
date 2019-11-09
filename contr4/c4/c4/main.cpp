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
void print_array(int **data, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int **arr = get_array(10);
    init_array(arr, 10);
    int x, y;
    cin >> x >> y;
    int zn = arr[x-1][y-1];
    if(zn == 1){
        arr[x-1][y-1] = 2;
    }
    print_array(arr, 10);
    delete_array(arr, 10);
    return 0;
}
