#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

typedef long long int ll_int;

class Fraction{
    ll_int x;
    ll_int y;
public:
    Fraction(ll_int = 0, ll_int = 1);
    void show();
    void read();
    friend bool operator<(double, const Fraction);
};

Fraction::Fraction(ll_int x, ll_int y):x(x),y(y){}

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

bool operator<(double n, const Fraction f)
{
    double res = (f.x * 1.0) / (f.y * 1.0);
    if(n < res){
        return true;
    }else{
        return false;
    }
}

int main()
{
    double z;
    cin >> z;
    Fraction a;
    a.read();
    cout << (z < a ? "YES" : "NO");
    return 0;
}
