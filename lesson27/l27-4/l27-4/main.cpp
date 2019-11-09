#include <iostream>
using namespace std;
int main()
{
    int* arr = new int[4];
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    int max1 = -2147483648;//INT_MIN;
    int max2 = -2147483648;;
    int max1_i = 0, max2_i = 0;
    for(int i = 0; i < 4; i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
            max2_i = max1_i;
            max1_i = i;
        }else{
            if(arr[i]>=max2){
                max2 = arr[i];
                max2_i = i;
            }
        }
    }
    if(max1_i < max2_i){
        cout << max1_i+1 << " " << max2_i+1;
    }else{
        cout << max2_i+1 << " " << max1_i+1;
    }
    return 0;
}
