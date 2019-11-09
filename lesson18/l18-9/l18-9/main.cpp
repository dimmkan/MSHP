#include <iostream>

using namespace std;

int main()
{
    int n, k1, k2;
    int sum = 0;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k1 >> k2;
    for(int i = k1-1; i < k2; i++){
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
