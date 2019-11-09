#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++){
        if(arr[i]%10 == 0 && arr[i-1]%10 == 0){
            count++;
        }
    }
    cout << count;
    return 0;
}
