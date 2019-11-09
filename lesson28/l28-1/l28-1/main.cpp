#include <iostream>
using namespace std;
int main()
{
    const int SZ = 100;
    int n, k, s;
    int arr[SZ];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k >> s;
    cout << (arr[k-1]>=arr[s-1]?"YES":"NO");
    return 0;
}
