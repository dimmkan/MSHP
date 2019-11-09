#include <iostream>

using namespace std;

double rec_power(double x, int p);

int main()
{
    double x;
    int p;
    cin >> x >> p;
    cout.precision(6);
    cout << fixed << rec_power(x, p);
    return 0;
}

double rec_power(double x, int p){
    return(p == 0 ? 1 : x*rec_power(x, p-1));
}
