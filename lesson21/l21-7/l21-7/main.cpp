#include <iostream>
using namespace std;

int digitSum(int n){
    int sum = 0;
    do{
        sum += n%10;
        n /= 10;
    }while(n);
    return sum;
}

int digitRoot(int n){
    return digitSum(n);
}

int main()
{
    int n;
    cin >> n;
    while(abs(n) > 9){
        n = digitRoot(n);
    }
    cout << n;
    return 0;
}
