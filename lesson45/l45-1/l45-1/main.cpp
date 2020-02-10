#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

typedef long long int ll_int;

class Fraction{
    ll_int x;
    ll_int y;
    ll_int NOK(ll_int, ll_int);
    ll_int NOD(ll_int, ll_int);
public:
    Fraction(ll_int = 0, ll_int = 1);
    void show();
    void read();
    Fraction operator*(const Fraction);
    Fraction operator-(const Fraction);
    Fraction operator/(const Fraction);
    friend Fraction operator*(ll_int, const Fraction);
};

Fraction::Fraction(ll_int x, ll_int y):x(x),y(y){}

ll_int Fraction::NOK(ll_int a, ll_int b)
{
    return (a*b)/NOD(a,b);
}

ll_int Fraction::NOD(ll_int a, ll_int b)
{
    ll_int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

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

Fraction Fraction::operator*(const Fraction f)
{
    long long new_y = y * f.y;
    long long new_x = x * f.x;
    return Fraction(new_x, new_y);
}

Fraction Fraction::operator-(const Fraction f)
{
    long long new_y = this->NOK(abs(this->y), abs(f.y));
    long long s_1 = new_y/y, s_2 = new_y/f.y;
    long long new_x = x * s_1 - f.x * s_2;
    return Fraction(new_x, new_y);
}

Fraction Fraction::operator/(const Fraction f)
{
    long long new_y = y * f.x;
    long long new_x = x * f.y;
    return Fraction(new_x, new_y);
}

Fraction operator*(ll_int n, const Fraction f)
{
    long long new_y = f.y;
    long long new_x = f.x * n;
    return Fraction(new_x, new_y);
}

int main()
{
    Fraction a, b, c, d;
    a.read();
    b.read();
    c.read();
    d.read();
    Fraction res = (d * d) - ((3 * a) / (b * c));
    res.show();
    return 0;
}
