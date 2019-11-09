#include <iostream>

using namespace std;

int main()
{
    const int sz = 1000;
    int arr[sz] = {};
    int n, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
