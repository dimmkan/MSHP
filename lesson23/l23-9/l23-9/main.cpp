#include <iostream>
using namespace std;
int* read_array(int n){
    int *x = new int[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    return x;
}
void print_array(int *a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
int* merge_arrays(int* A, int Asize, int* B, int Bsize){
    int Csize = Asize+Bsize;
    int *c = new int[Csize];
    for(int i = 0; i < Asize; i++){
        c[i] = A[i];
    }
    for(int i = 0; i < Bsize; i++){
        c[i+Asize] = B[i];
    }
    return c;

}
int main()
{
    int Asize, Bsize;
    cin >> Asize >> Bsize;
    int *A = read_array(Asize);
    int *B = read_array(Bsize);
    int *C = merge_arrays(A, Asize, B, Bsize);
    print_array(C, Asize+Bsize);
    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}
