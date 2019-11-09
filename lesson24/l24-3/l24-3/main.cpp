#include <iostream>
using namespace std;
const int N = 100;
void filling_array(int arr[N][N], int n){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            if((r == t) || (r+t == n-1)){
                arr[r][t] = 1;
            }else{arr[r][t] = 0;}
        }
    }
}
void print_array(int arr[N][N], int n){
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            cout << arr[r][t] << " ";
        }
        cout << endl;
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
