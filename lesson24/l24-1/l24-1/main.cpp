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
int main()
{
    int n;
    cin >> n;
    int arr[N][N] = {};
    for(int r = 0; r < n; r++){
        for(int t = 0; t < n; t++){
            arr[r][t] = r+1;
        }
    }
    print_array(arr, n);
    return 0;
}
