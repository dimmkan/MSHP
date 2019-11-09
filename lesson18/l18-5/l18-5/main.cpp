#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double arr[n] = {};
    for(int i = 0; i < n; i++){
        double tmp;
        cin >> tmp;
        if(tmp > 10.0){
            tmp = sqrtf(tmp);
        }
        arr[i] = tmp;
    }
    for(int i = 0; i < n; i++){
        cout.precision(6);
        cout << fixed << arr[i] << " ";
    }
    return 0;
}
