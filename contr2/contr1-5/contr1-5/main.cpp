#include <iostream>
using namespace std;
int main()
{
    int n, max, max2;
    cin >> n;
    cin >> max >> max2;
    for(int i = 0; i < n-2; i++){
        int tmp;
        cin >> tmp;
        if(tmp != 0){
            if(tmp > max){
                max2 = max;
                max = tmp;
            }
            else if(tmp > max2 && tmp < max){max2 = tmp;}
        }

    }
    cout << max << " " << max2;
    return 0;
}
