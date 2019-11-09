#include <iostream>
using namespace std;
int **get_array(int n, int m){
    int **arr = new int* [n];
    for(int i = 0; i < n; i++){
        arr[i] = new int [m];
    }
    return arr;
}
void delete_array(int **data, int n){
    for(int i = 0; i < n; i++){
        delete[] data[i];
    }
    delete[] data;
}
void init_array(int **data, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> data[i][j];
        }
    }

}
int get_min(int **data, int n, int m, int *imin, int *jmin){
    *imin = *jmin = 0;
    int min = data[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(data[i][j] < min){
                min = data[i][j];
                *imin = i;
                *jmin = j;
            }
        }
    }
    return min;
}
int get_max(int **data, int n, int m, int *imax, int *jmax){
    *imax = *jmax = 0;
    int max = data[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(data[i][j] > max){
                max = data[i][j];
                *imax = i;
                *jmax = j;
            }
        }
    }
    return max;
}
int main()
{
    int n, m, imax, jmax, imin, jmin;
    cin >> n >> m;
    int **arr = get_array(n, m);
    init_array(arr, n, m);
    int min = get_min(arr, n, m, &imin, &jmin);
    cout << imin+1 << " " << jmin+1 << " " << min << endl;
    int max = get_max(arr, n, m, &imax, &jmax);
    cout << imax+1 << " " << jmax+1 << " " << max << endl;
    delete_array(arr, n);
    return 0;
}
