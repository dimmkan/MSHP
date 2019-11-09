#include <iostream>

using namespace std;

int main()
{
    int n, x, sum = 0;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> x;
    for(int i = 0; i < n; i++){
        if(arr[i]%x == 0){
            sum += arr[i];
        }
    }
    cout << sum;
    return 0;
}
