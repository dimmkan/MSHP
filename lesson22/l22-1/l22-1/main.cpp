#include <iostream>

using namespace std;

void numswap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x, y;
    cin >> x >> y;
    numswap(&x, &y);
    cout << x << " " << y;
    return 0;
}
