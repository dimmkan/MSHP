#include <iostream>

using namespace std;

int recDigitSum(int n);

int main()
{
    int n;
    cin >> n;
    cout << recDigitSum(n);
    return 0;
}

int recDigitSum(int n){
    int tmp = n%10;
    return(n/10 == 0 ? n%10 : tmp += recDigitSum(n/10));
}
