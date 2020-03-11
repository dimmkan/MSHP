#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

//Класс дроби
class Fraction{
    long long x;
    long long y;
    long long NOK(long long, long long);
    long long NOD(long long, long long);
    void cut();
public:
    Fraction(long long = 0, long long = 1);
    bool operator==(const Fraction);
    bool operator<(const Fraction);
    friend istream &operator >> (istream&, Fraction&);
    friend ostream &operator << (ostream&, const Fraction&);
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

bool Fraction::operator==(const Fraction f)
{
    long long new_y = this->NOK(abs(this->y), abs(f.y));
    long long s_1 = new_y/y, s_2 = new_y/f.y;
    long long new_x1 = x * s_1;
    long long new_x2 = f.x * s_2;
    return new_x1 == new_x2;
}

bool Fraction::operator<(const Fraction f){
    long long new_y = this->NOK(abs(this->y), abs(f.y));
    long long s_1 = new_y/y, s_2 = new_y/f.y;
    long long new_x1 = x * s_1;
    long long new_x2 = f.x * s_2;
    return new_x1 < new_x2;
}

istream &operator >>(istream &in, Fraction &f)
{
    in >> f.x;
    in.ignore(1);
    in >> f.y;
    return in;
}

ostream &operator <<(ostream &out, const Fraction &f)
{
    out << f.x << "/" << f.y;
    return out;
}

//Шаблон
template <class T>
T my_max(T a, T b){
    return (a < b) ? b : a;
}

int main()
{
    char cmd[8] = {};
    cin >> cmd;
    if(!strcmp(cmd, "INT")){
        int a, b;
        cin >> a >> b;
        cout << my_max(a, b);
    }else if(!strcmp(cmd, "FRACTION")){
        Fraction a, b;
        cin >> a >> b;
        cout << my_max(a, b);
    }else if(!strcmp(cmd, "CHAR")){
        char a, b;
        cin >> a >> b;
        cout << my_max(a, b);
    }
    return 0;
}
