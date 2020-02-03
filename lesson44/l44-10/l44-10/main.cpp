#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Fraction{
    long long x;
    long long y;
public:
    Fraction(long long = 0, long long = 1);
    void show();
    void read();
    Fraction operator%(const Fraction);
};

Fraction::Fraction(long long x, long long y):x(x),y(y){}

void Fraction::show()
{
    cout << x << "/" << y;
}

void Fraction::read()
{
   char c[50] = {};
   cin >> c;
   x = atoi(strtok(c, "/"));
   y = atoi(strtok(nullptr, "\0"));
}

Fraction Fraction::operator%(const Fraction f)
{
    long long new_y = y;
    long long new_x = (x < f.x*y)? x : (x % (f.x*y));
    return Fraction(new_x, new_y);
}

int main()
{
    Fraction f1;
    int n;
    f1.read();
    cin >> n;
    Fraction f2(n);
    Fraction f3 = f1 % f2;
    f3.show();
    return 0;
}
