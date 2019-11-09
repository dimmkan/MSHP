#include <iostream>
using namespace std;
void digit_count(int k, int *c){
    do{
        k /= 10;
        (*c)++;
    }while(k);
}
int main()
{
    int arr[5] = {};
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++){
        int c = 0;
        digit_count(arr[i], &c);
        cout << c << endl;
    }
    return 0;
}
