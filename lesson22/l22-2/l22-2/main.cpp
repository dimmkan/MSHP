#include <iostream>

using namespace std;

void count_odd_even(int n, int *odd, int *even){
    do{
        int k = n%10;
        if(k%2 != 0){
            *odd += 1;
        }else{*even += 1;}
        n /= 10;
    }while(n);
}

int main()
{
    for(int i = 0; i < 10; i++){
        int n, odd = 0, even = 0;
        cin >> n;
        count_odd_even(n, &odd, &even);
        cout << odd << " " << even << endl;
    }
    return 0;
}
