#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int m = 0;
    int a[100] = {};
    int b[100] = {};

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool is_symmetric = true;
    do {
        is_symmetric = true;
        for (int i = m, j = n - 1; i <= j; ++i, --j) {
            if (a[i] != a[j]) {
                is_symmetric = false;
                b[m] = a[m];
                ++m;
                break;
            }
        }
    } while (!is_symmetric);

    cout << m << '\n';
    if (m != 0) {
        for (int i = m - 1; i >= 0; --i) {
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
}
