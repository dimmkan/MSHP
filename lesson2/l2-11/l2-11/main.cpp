#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double f;
    cin >> f;
    int rub = int(f);
    int kop = round((f-floor(f))*100);
    cout << rub << " rub " << kop << " kop";
    return 0;
}

