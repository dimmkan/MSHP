#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max_digit = int(pow(10, n));
    int min_digit = int(pow(10, n-1));
    max_digit -= 1;
    for(int i = min_digit; i <= max_digit; i++){
        int tmp_sum = 0;
        int tmp_m = i;
        do{
            tmp_sum += int(pow(tmp_m%10, n));
            tmp_m /= 10;
        }while(tmp_m > 0);

        if(i == tmp_sum){
            cout << i << endl;
        }
    }
    return 0;
}
