#include <iostream>
using namespace std;

int find_min(int data[100000], int n) {
    int min = data[0];
    for (int i = 1; i < n; ++i)
        if (data[i] < min)
            min = data[i];
    return min;
}

int find_max(int data[100000], int n) {
    int max = data[0];
    for (int i = 1; i < n; ++i)
        if (data[i] > max)
            max = data[i];
    return max;
}

int main()
{
    int n;
    long long int min, max;
    double res;
    const int sz = 100000;
    int arr[sz] = {};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    min = find_min(arr, n);
    max = find_max(arr, n);
    res = double(min + max) / 2.0;
    cout << res;
    return 0;
}
