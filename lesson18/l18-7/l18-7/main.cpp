#include <iostream>

using namespace std;

int main()
{
    int k, n;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k;
    (arr[k-1]%2 == 0)? cout << "YES" : cout << "NO";
    return 0;
}
