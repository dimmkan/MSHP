#include <iostream>
using namespace std;
int main()
{
    int arr[500][500], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j > i){
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}
