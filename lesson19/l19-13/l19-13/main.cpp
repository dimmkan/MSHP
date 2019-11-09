#include <iostream>

using namespace std;

int main()
{
    int n, i, j, count = 1;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(arr[j] == arr[i]){
                break;
            }
        }
        if(j == n) count++;
    }
    cout << count;
    return 0;
}
