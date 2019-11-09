#include <iostream>
using namespace std;
void print_array(int *a){
   int i = 0;
   while(a[i] != -1){
        cout << a[i] << endl;
        i++;
   }
}
int* todigits(int n){
    long long int p = 1;
    int count = 1;
    while (p*10 <= n) {
        p *= 10;
        count++;
    }
    int *a = new int[count+1];
    int i = 0;
    do{
        a[i] = n / p;
        n %= p;
        p /= 10;
        i++;
    }while(p);
    a[count] = -1;
    return a;
}
int main()
{
    int n;
    cin >> n;
    int *arr = todigits(n);
    print_array(arr);
    delete[] arr;
    return 0;
}
