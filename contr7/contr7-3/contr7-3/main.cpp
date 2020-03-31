#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

class Binary {
    bool data[32];
public:
    Binary();
    Binary(long long value);
    Binary(char *s);
    void show() const;
    long long to_int() const;
    Binary operator+(const Binary);
    Binary operator-(const Binary);
    Binary operator*(const Binary);
    Binary operator/(const Binary);
};

Binary::Binary()
{
    for(int i = 0; i < 32; i++){
        data[i] = 0;
    }
}

Binary::Binary(long long value):Binary()
{
    for(int i = 31, j = 0; value > 0; i--, j++){
        data[i] = (value % 2) * pow(10, j);
        value /= 2;
    }
}

Binary::Binary(char *s):Binary()
{
    int j = 31;
    for(int i = strlen(s)-1; i >= 0; i--){
        data[j--] = (s[i] == '0' ? false : true);
    }
}

void Binary::show() const
{
    int i = 0;
    while (data[i] == 0 && i < 31) {
        i++;
    }
    for(int j = i; j < 32; j++){
        cout << data[j];
    }
    cout << endl;
}

long long Binary::to_int() const
{
    long long res = 0;
    for(int i = 31, j = 0; j < 32; i--, j++){
        res += data[i] * pow(2, j);
    }
    return res;
}

Binary Binary::operator+(const Binary src)
{
    long long res = this->to_int() + src.to_int();
    return Binary(res);
}

Binary Binary::operator-(const Binary src)
{
    long long res = this->to_int() - src.to_int();
    return Binary(res);
}

Binary Binary::operator*(const Binary src)
{
    long long res = this->to_int() * src.to_int();
    return Binary(res);
}

Binary Binary::operator/(const Binary src)
{
    long long res = this->to_int() / src.to_int();
    return Binary(res);
}

int main()
{
    char n[33] = {'\0'};
    char k[33] = {'\0'};
    cin >> n >> k;
    Binary N(n);
    Binary K(k);
    Binary b0 = N + K;
    Binary b1 = N - K;
    Binary b2 = N * K;
    Binary b3 = N / K;
    b0.show();
    b1.show();
    b2.show();
    b3.show();
    return 0;
}
