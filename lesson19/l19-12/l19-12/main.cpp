#include <iostream>
using namespace std;

int main() {
    int n, sm, im, s=0;
    cin >> n;
    int a[n] = {};
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<5; i++) s += a[i];
    sm = s; im=0;
    for (int i=1; i<n-4; i++){
        s = s-a[i-1]+a[i+4];
        if (s > sm) { sm = s; im = i; }
    }
    cout << im+1;
    return 0;
}
