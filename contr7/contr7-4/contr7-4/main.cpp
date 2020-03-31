#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

template <class T>
class Binary {
    T data[32];
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

template <class T>
Binary<T>::Binary()
{
    for(int i = 0; i < 32; i++){
        data[i] = 0;
    }
}
template <class T>
Binary<T>::Binary(long long value):Binary()
{
    for(int i = 31, j = 0; value > 0; i--, j++){
        data[i] = (value % 2);
        value /= 2;
    }
}
template <class T>
Binary<T>::Binary(char *s):Binary()
{
    int j = 31;
    for(int i = strlen(s)-1; i >= 0; i--){
        data[j--] = (s[i] == '0' ? 0 : 1);
    }
}
template <class T>
void Binary<T>::show() const
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
template <class T>
long long Binary<T>::to_int() const
{
    long long res = 0;
    for(int i = 31, j = 0; j < 32; i--, j++){
        res += data[i] * pow(2, j);
    }
    return res;
}
template <class T>
Binary<T> Binary<T>::operator+(const Binary src)
{
    long long res = this->to_int() + src.to_int();
    return Binary(res);
}
template <class T>
Binary<T> Binary<T>::operator-(const Binary src)
{
    long long res = this->to_int() - src.to_int();
    return Binary(res);
}
template <class T>
Binary<T> Binary<T>::operator*(const Binary src)
{
    long long res = this->to_int() * src.to_int();
    return Binary(res);
}
template <class T>
Binary<T> Binary<T>::operator/(const Binary src)
{
    long long res = this->to_int() / src.to_int();
    return Binary(res);
}

int main()
{
    char tmpl[15] = {};
    char n[33] = {'\0'};
    char k[33] = {'\0'};
    cin >> tmpl >> n >> k;
    if(!strcmp(tmpl, "BOOL")){
        Binary<bool> N(n);
        Binary<bool> K(k);
        Binary<bool> b0 = N + K;
        Binary<bool> b1 = N - K;
        Binary<bool> b2 = N * K;
        Binary<bool> b3 = N / K;
        b0.show();
        b1.show();
        b2.show();
        b3.show();
    }else if(!strcmp(tmpl, "SHORT")){
        Binary<short> N(n);
        Binary<short> K(k);
        Binary<short> b0 = N + K;
        Binary<short> b1 = N - K;
        Binary<short> b2 = N * K;
        Binary<short> b3 = N / K;
        b0.show();
        b1.show();
        b2.show();
        b3.show();
     }else if(!strcmp(tmpl, "INT")){
        Binary<int> N(n);
        Binary<int> K(k);
        Binary<int> b0 = N + K;
        Binary<int> b1 = N - K;
        Binary<int> b2 = N * K;
        Binary<int> b3 = N / K;
        b0.show();
        b1.show();
        b2.show();
        b3.show();
    }else if(!strcmp(tmpl, "LONGLONG")){
        Binary<long long> N(n);
        Binary<long long> K(k);
        Binary<long long> b0 = N + K;
        Binary<long long> b1 = N - K;
        Binary<long long> b2 = N * K;
        Binary<long long> b3 = N / K;
        b0.show();
        b1.show();
        b2.show();
        b3.show();
    }
    return 0;
}
