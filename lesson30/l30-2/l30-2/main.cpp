#include <iostream>

using namespace std;

int recDigitCount(int n);

int main()
{
    int n;
    cin >> n;
    cout << recDigitCount(n);
    return 0;
}

int recDigitCount(int n){
    int tmp = 1;
    return(n/10 == 0 ? 1 : tmp += recDigitCount(n/10));
}
