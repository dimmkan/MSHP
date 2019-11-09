#include <iostream>

using namespace std;

int sum(int x)
{
    int r = 0;
    for (int k = 1; k < x; k++) {
        if (x % k == 0) r += k;
    }
    return r;
}


int main()
{
    int n, s = 0;
    cin >> n;
    for(int i = 2; i < n; i++){
        s = sum(i);
        if (s != i && s < n && i == sum(s))
            cout << i << " " << s << endl;
    }
    return 0;
}
