#include <iostream>
#include <iomanip>
using namespace std;
bool is_in_square(double x, double y){
    return ((x <= 1.0 && x >= -1.0) && (y <= 1.0 && y >= -1.0));
}
int main()
{
    double x, y;
    cin >> x >> y;
    cout << (is_in_square(x, y)?"YES":"NO");
    return 0;
}
