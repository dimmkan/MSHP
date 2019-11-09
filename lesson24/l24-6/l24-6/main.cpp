#include <iostream>
using namespace std;
const int N = 100;
const int M = 100;
void print_array(int arr[N][N], int n, int m){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < m; t++){
            cout << arr[r][t] << " ";
        }
        cout << endl;
    }
}
void filling_array(int arr[N][M], int n, int m){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < m; t++){
            arr[r][t] = r*t;
        }
    }
}
int main()
{
    int arr[N][M] = {}, n, m;
    cin >> n >> m;
    filling_array(arr, n, m);
    print_array(arr, n, m);
    return 0;
}
