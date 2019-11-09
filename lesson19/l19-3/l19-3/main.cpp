#include <iostream>

using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(i==0 && arr[i]>arr[i+1])k++;
        else
            if(i==n-1 && arr[i]>arr[i-1])k++;
            else
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1])k++;
    }
    cout << k;
    return 0;
}
