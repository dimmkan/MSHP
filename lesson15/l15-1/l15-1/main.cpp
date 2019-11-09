#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cin >> x;
    if(x < 0.0){
        cout << "NEGATIVE";
    }else{
        cout << "POSITIVE";
    }
    return 0;
}
