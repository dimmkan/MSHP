#include <iostream>
#include <iomanip>

using namespace std;

ostream &operator +(ostream &out, int k)
{
    out << setfill('0') << setw(k);
    return out;
}

int main()
{
    int n, k;
    cin >> n >> k;
    if(n < 0){
        cout << '-';
        cout + k << -n << ' ' << n << endl;
    }else {
        cout + k << n << ' ' << n << endl;
    }
    return 0;
}
