#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Fraction{
    int x;
    int y;
public:
    Fraction(int = 0, int = 1);
    void show();
    void read();
    operator double();
};

Fraction::Fraction(int x, int y):x(x),y(y){}

void Fraction::show()
{
    cout << x << "/" << y;
}

void Fraction::read()
{
   cin >> x;
   cin.ignore(1, '/');
   cin >> y;
}

Fraction::operator double()
{
    return double(x) / y;
}


int main()
{
    Fraction a;
    a.read();
    cout.precision(6);
    cout << fixed << double(a);
    return 0;
}
