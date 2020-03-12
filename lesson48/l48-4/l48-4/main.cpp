#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

//Класс дроби
class Fraction{
    int x;
    int y;
    int NOK(int, int);
    int NOD(int, int);
    void cut();
public:
    Fraction(int = 0, int = 1);
    bool operator==(const Fraction);
    bool operator<(const Fraction);
    friend istream &operator >> (istream&, Fraction&);
    friend ostream &operator << (ostream&, const Fraction&);
};

int Fraction::NOK(int a, int b)
{
    return (a*b)/NOD(a,b);
}

int Fraction::NOD(int a, int b)
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
    int n = NOD(abs(x), abs(y));
    x /= n;
    y /= n;
}

Fraction::Fraction(int x, int y):x(x),y(y){}

bool Fraction::operator==(const Fraction f)
{
    int new_y = this->NOK(abs(this->y), abs(f.y));
    int s_1 = new_y/y, s_2 = new_y/f.y;
    int new_x1 = x * s_1;
    int new_x2 = f.x * s_2;
    return new_x1 == new_x2;
}

bool Fraction::operator<(const Fraction f){
    return (x * 1.0 / y < f.x * 1.0 / f.y);
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
    if(f.x == f.y){
        out << 1 << "/" << 1;
    }else{
        out << f.x << "/" << f.y;
    }
    return out;
}

//Шаблон
template <class T>
T my_max(T a, T b){
    return (a < b) ? b : a;
}

template <class T>
class Array {
    int len;                     // Длина массива
    T* data;
public:
    Array(int len, T val);       // Создать массив длины len и заполнить его числом val
    Array(const Array &);        // Конструктор копирования массива
    ~Array();

    int length();                // Метод для получения длины массива
    void reverse();              // Перевернуть массив задом-наперед
    Array &operator=(const Array);
    bool operator<(const Array<T>&);
    T &operator[](int);
    friend ostream& operator << (ostream& out, const Array<T>& arr){
        for(int i = 0; i < arr.len; i++){
            out << arr.data[i] << " ";
        }
        return out;
    }
    friend istream& operator >> (istream&, Array<T>&);
};

template <class T>
Array<T>::Array(int len, T val):len(len)
{
    data = new T[len];
    for(int i = 0; i < len; i++){
        data[i] = val;
    }
}

template <class T>
Array<T>::Array(const Array &arr)
{
    len = arr.len;
    data = new T[len];
    for(int i = 0; i < len; i++){
        data[i] = arr.data[i];
    }
}

template <class T>
Array<T>::~Array()
{
    delete [] data;
}

template <class T>
int Array<T>::length()
{
    return len;
}

template <class T>
void Array<T>::reverse()
{
    T tmp;
    for(int i = 0; i < len/2; i++){
        tmp = data[i];
        data[i] = data[len-1-i];
        data[len-1-i] = tmp;
    }
}

template <class T>
Array<T> &Array<T>::operator=(const Array<T> arr)
{
    len = arr.len;
    data = new T[len];
    for(int i = 0; i < len; i++){
        data[i] = arr.data[i];
    }
    return *this;
}

template<class T>
bool Array<T>::operator<(const Array<T> &arr)
{
    return len < arr.len;
}

template<>
bool Array<char>::operator<(const Array &arr)
{
    return strcmp(data, arr.data) < 0;
}

template<class T>
T &Array<T>::operator[](int index)
{
    return data[index];
}

template<class T>
istream &operator >>(istream &in, Array<T> &arr)
{
    for(int i = 0; i < arr.len; i++){
        in >> arr.data[i];
    }
    return in;
}

template<class T>
T array_max(Array<T> &d)
{
    T tmp = d[0];
    for(int i = 1; i < d.length(); i++){
        tmp = tmp < d[i] ? d[i] : tmp;
    }
    return tmp;
}

int main()
{
    char cmd[8] = {};
    cin >> cmd;
    if(!strcmp(cmd, "INT")){
        int a, b;
        cin >> a;
        Array<int> Int1(a,0);
        for(int i = 0; i < a; i++){
            cin >> Int1[i];
        }
        cin >> b;
        Array<int> Int2(b,0);
        for(int i = 0; i < b; i++){
            cin >> Int2[i];
        }
        cout << (Int1 < Int2 ? "YES" : "NO");
    }else if(!strcmp(cmd, "FRACTION")){
        int a, b;
        cin >> a;
        Array<Fraction> Frac1(a,Fraction());
        for(int i = 0; i < a; i++){
            cin >> Frac1[i];
        }
        cin >> b;
        Array<Fraction> Frac2(b,Fraction());
        for(int i = 0; i < b; i++){
            cin >> Frac2[i];
        }
        cout << (Frac1 < Frac2 ? "YES" : "NO");
    }else if(!strcmp(cmd, "CHAR")){
        int a, b;
        cin >> a;
        Array<char> Char1(a,'\0');
        for(int i = 0; i < a; i++){
            cin >> Char1[i];
        }
        cin >> b;
        Array<char> Char2(b,'\0');
        for(int i = 0; i < b; i++){
            cin >> Char2[i];
        }
        cout << (Char1 < Char2 ? "YES" : "NO");
    }
    return 0;
}
