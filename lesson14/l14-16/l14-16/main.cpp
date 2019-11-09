#include <iostream>
using namespace std;
int main()
{
    long long int max = 0, income = 0, o1 = 100000, o2 = 200000;
    short l;
    cin >> l;
    for(int i = 0; i < l; i++){
        max = o1 + o2;
        income += max;
        if(o1 < o2){o1 = max;}
        else{o2 = max;}
    }
    cout << max << " " << income;
    return 0;
}
