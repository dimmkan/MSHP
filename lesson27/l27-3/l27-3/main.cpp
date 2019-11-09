#include <iostream>
using namespace std;
int main()
{
    int* arr = new int[3];
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for(int i = 1; i < 3; i++){
        min = (arr[i]<min)?arr[i]:min;
        max = (arr[i]>max)?arr[i]:max;
    }
    cout << max - min;
    return 0;
}
