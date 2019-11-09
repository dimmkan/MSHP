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
void print_array(int **data, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

}
void init_array(int **data, int n){
    int k = 1;
    int i = 0;
    int j = 0;
    while (k <= n*n){
        data[i][j] = k;
        if (i <= j + 1 && i + j < n - 1)
            j++;
        else if (i < j && i + j >= n - 1)
            i++;
        else if (i >= j && i + j > n - 1)
            j--;
        else
            i--;
        k++;
    }
}
int main()
{
    int n;
    cin >> n;
    int **arr = get_array(n);
    init_array(arr, n);
    print_array(arr, n);
    delete_array(arr, n);
    return 0;
}
