#include <iostream>

using namespace std;

void reduce(int* m, int* n) {
    int a, b, c;
    a = *m;
    b = *n;
    do{
        c=a%b;
        a=b;
        b=c;
    }while(b>0);
    *m /= a;
    *n /= a;
}
int main()
{
    int n, m;
    cin >> n >> m;
    reduce(&m, &n);
    cout << n << " " << m;
    return 0;
}
