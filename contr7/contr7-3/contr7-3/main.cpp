#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

class Binary {
protected:
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

class BinaryWithOutput: public Binary{
public:
    BinaryWithOutput():Binary(){}
    BinaryWithOutput(long long);
    bool& operator[](const int index);
    friend ostream& operator << (ostream&, const BinaryWithOutput&);
    friend istream& operator >> (istream&, BinaryWithOutput&);
    BinaryWithOutput increment();
};

ostream &operator <<(ostream & out, const BinaryWithOutput &b)
{
    int i = 0;
    while (b.data[i] == 0 && i < 31) {
        i++;
    }
    for(int j = i; j < 32; j++){
        out << b.data[j];
    }
    out << endl;
}


istream &operator >>(istream &in, BinaryWithOutput &b)
{
    char n[33] = {'\0'};
    in >> n;
    int j = 31;
    for(int i = strlen(n)-1; i >= 0; i--){
        b[j--] = (n[i] == '0' ? false : true);
    }
}

BinaryWithOutput::BinaryWithOutput(long long value):Binary(){
    for(int i = 31, j = 0; value > 0; i--, j++){
        data[i] = (value % 2) * pow(10, j);
        value /= 2;
    }
}

bool &BinaryWithOutput::operator[](const int index)
{
    return data[index];
}

BinaryWithOutput BinaryWithOutput::increment()
{
    return BinaryWithOutput(this->to_int() + 1);
}

int main()
{
    ifstream in;
    ofstream out;
    in.open("in.txt", ios::in);
    out.open("out.txt", ios::out);
    BinaryWithOutput b;
    in >> b;
    out << b.increment();
    in.close();
    out.close();
    return 0;
}
