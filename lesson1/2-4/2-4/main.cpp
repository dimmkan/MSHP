#include <iostream>

using namespace std;

int main()
{
    int m, k, n;
    cin >> m >> k >> n;
    if (m + (k-n) < 0){
        cout << "Incorrect input!";
    }
    else {
    cout << m + (k-n) << endl;
    }
    return 0;
}
