#include <iostream>

using namespace std;

class Array {
    int len;                     // Длина массива
    int* data;                   // Дин. массив с числами

public:
    Array(int len, int val = 0); // Создать массив длины len и заполнить его числом val
    Array(const Array &);        // Конструктор копирования массива
    Array &operator=(const Array&);
    ~Array();

    int length();                // Метод для получения длины массива
    void reverse();              // Перевернуть массив задом-наперед
    int operator[](int);
    Array operator()(int, int);

    // Операция вывода массива
    friend ostream& operator << (ostream&, const Array&);

    // Операция ввода массива
    friend istream& operator >> (istream&, Array&);
    friend Array operator + (const Array&, int);
};
Array::Array(int len, int val):len(len)
{
    data = new int[len];
    for(int i = 0; i < len; i++){
        data[i] = val;
    }
}

Array::Array(const Array &arr)
{
    len = arr.len;
    data = new int[len];
    for(int i = 0; i < len; i++){
        data[i] = arr.data[i];
    }
}

Array &Array::operator=(const Array &arr)
{
    this->len = arr.len;
    this->data = new int[len];
    for (int i = 0; i < len; ++i) {
        this->data[i] = arr.data[i];
    }
    return (*this);
}

Array::~Array()
{
    delete [] data;
}

int Array::length()
{
    return len;
}

void Array::reverse()
{
    int tmp;
    for(int i = 0; i < len/2; i++){
        tmp = data[i];
        data[i] = data[len-1-i];
        data[len-1-i] = tmp;
    }
}

int Array::operator[](int index)
{
    index %= len;
    return (index < 0) ? data[len+index] : data[index];
}

Array Array::operator()(int l, int r)
{
    Array a(0);
    for(int i = l+1; i < r; i++){
        a = a + data[i];
    }
    return a;
}

istream &operator >>(istream &in, Array &arr)
{
    for(int i = 0; i < arr.len; i++){
        in >> arr.data[i];
    }
    return in;
}

ostream &operator <<(ostream &out, const Array &arr)
{
    for(int i = 0; i < arr.len; i++){
        out << arr.data[i] << " ";
    }
    return out;
}

Array operator +(const Array &arr, int value)
{
    Array result(arr.len+1);
    for (int i = 0; i < arr.len; ++i) {
        result.data[i] = arr.data[i];
    }
    result.data[arr.len] = value;
    return result;
}

int main(){
    int ln, l, r;
    cin >> ln;
    Array a(ln);
    cin >> a;
    cin >> l >> r;
    Array b = a(l, r);
    cout << b.length() << endl << b;
    return 0;
}
