#include <iostream>

using namespace std;

int main()
{
    int x, a, p;
    cin >> x;

    if (x % 2000 > 0){
        a = x / 2000 + 1;
    }
    else {
        a = x / 2000;
    }

    if (x % 200 > 0){
        p = x / 200 + 1;
    }
    else {
        p = x / 200;
    }

    if (p > 10){
        if (p % 10 > 0){
            p = p % 10;
        }
        else {
            p = 10;
        }
    }


    cout << a << " " << p;

    return 0;
}
