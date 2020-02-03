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
    Fraction operator-();
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

Fraction Fraction::operator-()
{
    long long new_y;
    long long new_x;
    if((y < 0 && x < 0) || (y > 0 && x > 0)){
        new_x = -x;
        new_y = y;
    }else{
        if(x < 0){
            new_x = -x;
            new_y = y;
        }else{
            new_x = x;
            new_y = -y;
        }
    }
    return Fraction(new_x, new_y);
}

int main()
{
    Fraction f1;
    f1.read();
    Fraction f2 = -f1;
    f2.show();
    return 0;
}
