#include <iostream>
using namespace std;
const int N = 500;
void filling_array(int arr[N][N], int n){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            cin >> arr[r][t];
        }
    }
}
void print_array(int arr[N][N], int n){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            if(r+t == n-1){
                cout << arr[r][t] << " ";
            }
        }
    }
}
int main()
{
    int arr[N][N] = {}, n;
    cin >> n;
    filling_array(arr, n);
    print_array(arr, n);
    return 0;
}
