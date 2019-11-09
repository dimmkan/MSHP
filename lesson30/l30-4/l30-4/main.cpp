#include <iostream>

using namespace std;

int recDigitSum(int n);
int digital_root(int n);

int main()
{
    int n;
    cin >> n;
    cout << digital_root(n);
    return 0;
}

int recDigitSum(int n){
    int tmp = n%10;
    return(n/10 == 0 ? n%10 : tmp += recDigitSum(n/10));
}

int digital_root(int n){
    int tmp = 0;
    do{
        tmp += n%10;
        n /= 10;
    }while(n);
    n = tmp;
    return(n/10 == 0 ? n : digital_root(n));
}
