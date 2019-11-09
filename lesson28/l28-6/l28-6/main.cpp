#include <iostream>
using namespace std;
int main()
{
    int n, arr[500][500], min = 1001, x, y;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1){
                if(arr[i][j] < min){
                    min = arr[i][j];
                    x = i+1;
                    y = j+1;
                }
            }
        }
    }
    cout << x << " " << y;
    return 0;
}
