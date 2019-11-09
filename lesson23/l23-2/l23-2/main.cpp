#include <iostream>
using namespace std;
int* read_array(int *n){
    cin >> *n;
    int *x = new int[*n];
    for(int i = 0; i < *n; i++){
        cin >> x[i];
    }
    return x;
}
void rasch(int *a, int n){
    int odd_sum = 0, even_sum = 0;
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            odd_sum += a[i];
        }else{
            even_sum += a[i];
        }
    }
    (even_sum > odd_sum) ? cout << "YES" : cout << "NO";
}
int main()
{
    int n;
    int *arr = read_array(&n);
    rasch(arr, n);
    delete [] arr;
    return 0;
}
