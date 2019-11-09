#include <iostream>

using namespace std;

int rec_fact(int n);

int main()
{
    int n;
    cin >> n;
    cout << rec_fact(n);
    return 0;
}

int rec_fact(int n){
    return (n == 1? 1 : n *= rec_fact(n-1));
}
