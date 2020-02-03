#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Fraction{
    long long x;
    long long y;
    long long NOK(long long, long long);
    long long NOD(long long, long long);
    void cut();
public:
    Fraction(long long = 0, long long = 1);
    void show();
    void read();
    bool operator==(const Fraction);
};


long long Fraction::NOK(long long a, long long b)
{
    return (a*b)/NOD(a,b);
}

long long Fraction::NOD(long long a, long long b)
{
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void Fraction::cut()
{
    long long n = NOD(abs(x), abs(y));
    x /= n;
    y /= n;
}

Fraction::Fraction(long long x, long long y):x(x),y(y){}

void Fraction::show()
{
    //this->cut();
    cout << x << "/" << y;
}

void Fraction::read()
{
   char c[50] = {};
   cin >> c;
   x = atoi(strtok(c, "/"));
   y = atoi(strtok(nullptr, "\0"));
}

bool Fraction::operator==(const Fraction f)
{
    long long new_y = this->NOK(abs(this->y), abs(f.y));
    long long s_1 = new_y/y, s_2 = new_y/f.y;
    long long new_x1 = x * s_1;
    long long new_x2 = f.x * s_2;
    return new_x1 == new_x2;
}

int main()
{
    Fraction f1, f2;
    f1.read();
    f2.read();
    cout << (f1 == f2 ? "YES" : "NO")
    return 0;
}
