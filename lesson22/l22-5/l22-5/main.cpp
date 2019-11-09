#include <iostream>
using namespace std;
int read_array(int *A){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> *(A+i);
    }
    return n;
}
void count_mods(int *A, int size, int *mods, int m){
    for(int j = 0; j < m; j++){
        for(int i = 0; i < size; i++){
            if( *(A+i) % m == j ){
                *(mods+j) += 1;
            }
        }
    }
}
int main()
{
    const int SZ = 100;
    int arr[SZ] = {};
    int arr2[SZ] = {};
    int size = read_array(arr);
    int m;
    cin >> m;
    count_mods(arr, size, arr2, m);
    for(int i = 0; i < m; i++){
        cout << "Remainder " << i << ": " << arr2[i] << endl;
    }
    return 0;
}
