#include <iostream>

using namespace std;

int main()
{
    int n, et;
    cin >> n;
    if (n%12 > 0){
        et = n/12 + 1;
    }
    else{
        et = n/12;
    }
    cout << et << endl;
    return 0;
}
