#include <iostream>

using namespace std;

int main()
{
    const int SZ = 100;
    long long int arr[SZ] = {};
    int n;
    long long int x, p;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> x >> p;
    if(n <= SZ){
        for(int i = n-1; i >= p-1; i--){
            arr[i+1] = arr[i];
        }
        arr[p-1] = x;
        n++;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
