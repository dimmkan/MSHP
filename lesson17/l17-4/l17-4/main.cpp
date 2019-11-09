#include <iostream>

using namespace std;

int main()
{
    int l = 0, r = 0, msum = 0, sum = 0, num = 0;
        cin >> l >> r;

        if (l != r){
        for (; l < r; l++) {
            for (int i = 1; i < l; i++) {
                if (l % i == 0) sum += i;
            }
            if (sum > msum) {
                msum = sum;
                num = l;
            }
            sum = 0;
        }
        if (num) cout << num << endl;
    }
        else
            cout << l;
        return 0;
}
