#include <iostream>

using namespace std;

class Array {
    int len;                     // Длина массива
    int* data;                   // Дин. массив с числами

public:
    Array(int len, int val = 0); // Создать массив длины len и заполнить его числом val
    Array(const Array &);        // Конструктор копирования массива
    ~Array();

    int length();                // Метод для получения длины массива
    void reverse();              // Перевернуть массив задом-наперед
    int operator[](int);

    // Операция вывода массива
    friend ostream& operator << (ostream&, const Array&);

    // Операция ввода массива
    friend istream& operator >> (istream&, Array&);
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
    return data[index];
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

int main(){
    int ln, k;
    cin >> ln;
    Array a(ln);
    cin >> a;
    cin >> k;
    for(int i = 0; i < k; i++){
        int tmp;
        cin >> tmp;
        cout << a[tmp] << ' ';
    }
    return 0;
}
