#include <iostream>
using namespace std;

void reverse(int A[], int L, int R){
    for(int i = L-1; i < R; i++, R--){
        int tmp;
        tmp = A[i];
        A[i] = A[R-1];
        A[R-1] = tmp;
    }
}

int main()
{
    const int SZ = 1000;
    int arr[SZ] = {}, a, b, c, d, n;
    cin >> n >> a >> b >> c >> d;
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    reverse(arr, a, b);
    reverse(arr, c, d);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
