#include <iostream>
using namespace std;

int digitSum(int k){
    int sum = 0;
    do{
        sum += k%10;
        k = k/10;
    }while(k);
    return sum;
}

int main()
{
    int sum = 0;
    for(int i = 0; i < 5; i++){
        int tmp;
        cin >> tmp;
        sum += digitSum(tmp);
    }
    cout << sum;
    return 0;
}
