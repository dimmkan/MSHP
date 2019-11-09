#include <iostream>
using namespace std;
const int N = 10;
const int M = 10;
void filling_array(int arr[N][M], int n, int m){\
    for(int r = 0; r < n; r++){
        for(int t = 0; t < m; t++){
            if(r == 0){
                arr[r][t] = 1;
            }else{
                if(t == 0){
                    arr[r][t] = 1;
                }else{
                    arr[r][t] = arr[r][t-1] + arr[r-1][t];
                }
            }
        }
    }
}
void print_array(int arr[N][N], int n, int m){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < m; t++){
            cout << arr[r][t] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[N][M] = {};
    filling_array(arr, n, m);
    print_array(arr, n, m);
    return 0;
}
