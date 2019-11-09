#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    const int sz = 100;
    int arr[sz] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    (sum >= 0) ? cout << "YES" : cout << "NO";
    return 0;
}
