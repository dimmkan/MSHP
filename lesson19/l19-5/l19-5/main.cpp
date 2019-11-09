#include <iostream>

using namespace std;

int main()
{
    int n, a, count = 0;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i]*arr[i];
    }
    do{
        sum /= 10;
        count++;
    }while(sum);
    (count == 5) ? cout << "YES" : cout << "NO";
    return 0;
}
