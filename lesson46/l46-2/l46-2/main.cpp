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
    int operator[](int);
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

int Fraction::operator[](int index)
{
    return (index == 0) ? x : y;
}

int main()
{
    Fraction a;
    a.read();
    int i;
    cin >> i;
    cout << a[i];
    return 0;
}
