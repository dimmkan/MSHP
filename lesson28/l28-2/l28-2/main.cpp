#include <iostream>
using namespace std;
int main()
{
    const int SZ = 100;
    int n, k, ind = 0;
    int arr[SZ];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            ind = i+1;
            break;
        }
    }
    cout << ind;
    return 0;
}
