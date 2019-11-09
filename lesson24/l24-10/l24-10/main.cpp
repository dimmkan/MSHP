#include <iostream>
using namespace std;
const int N = 100;
void print_array(int arr[N][N], int n){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            cout << arr[r][t] << " ";
        }
        cout << endl;
    }
}
void filling_array(int arr[N][N], int n){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            arr[r][t] = abs(r-t);
        }
    }
}
int main()
{
    int arr[N][N], n;
    cin >> n;
    filling_array(arr, n);
    print_array(arr, n);
    return 0;
}
