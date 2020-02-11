#include <iostream>
#include <cstring>

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
    Array &operator=(const Array);

    // Операция вывода массива
    friend ostream& operator << (ostream&, const Array&);

    // Операция ввода массива
    friend istream& operator >> (istream&, Array&);
    friend Array operator+(int, const Array);
    friend Array operator+(const Array, int);
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

Array &Array::operator=(const Array arr)
{
    len = arr.len;
    data = new int[len];
    for(int i = 0; i < len; i++){
        data[i] = arr.data[i];
    }
    return *this;
}

Array operator+(const Array arr, int x)
{
    Array tmp_arr(arr.len+1);
    for(int i = 0; i<arr.len; i++){
        tmp_arr.data[i] = arr.data[i];
    }
    tmp_arr.data[arr.len] = x;
    return tmp_arr;
}

Array operator+(int x, const Array arr)
{
    Array tmp_arr(arr.len+1);
    tmp_arr.data[0] = x;
    for(int i = 0; i<arr.len; i++){
        tmp_arr.data[i+1] = arr.data[i];
    }
    return tmp_arr;
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
    int ln, cnt;
    cin >> ln;
    Array a(ln);
    cin >> a;
    cin >> cnt;
    char cmd[10];
    for(int i = 0; i < cnt; i++){
        cin >> cmd;
        if(!strcmp(cmd, "RIGHT")){
            int tmp;
            cin >> tmp;
            a = a + tmp;
        }else if(!strcmp(cmd, "LEFT")){
            int tmp;
            cin >> tmp;
            a = tmp + a;
        }else{
            return -1;
        }
    }
    cout << a.length() << endl;
    cout << a;
    return 0;
}
