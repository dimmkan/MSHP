#include <iostream>

using namespace std;

int main()
{
    int n, a, sum = 0;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> a;
    for(int i = 0; i < n; i++){
        if(arr[i] > a){
            sum += arr[i];
        }
    }
    cout << sum;
    return 0;
}
