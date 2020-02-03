#include <iostream>
#include <cstring>

using namespace std;

class Fraction{
    long long x;
    long long y;
public:
    Fraction(long long = 0, long long = 1);
    void show();
    void read();
    Fraction operator+(int);
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

Fraction Fraction::operator+(int n)
{
    long long new_y = y;
    long long new_x = x + n * y;
    return Fraction(new_x, new_y);
}

int main()
{
    Fraction f1;
    int n;
    f1.read();
    cin >> n;
    Fraction f2 = f1 + n;
    f2.show();
    return 0;
}
