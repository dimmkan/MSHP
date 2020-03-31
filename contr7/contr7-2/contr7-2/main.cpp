#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Binary {
    bool data[32];
public:
    Binary();
    Binary(int value);
    Binary(char *s);
    void show() const;
    int to_int() const;
};

Binary::Binary()
{
    for(int i = 0; i < 32; i++){
        data[i] = 0;
    }
}

Binary::Binary(int value):Binary()
{
    for(int i = 31, j = 0; value > 0; i--, j++){
        data[i] = (value % 2) * pow(10, j);
        value /= 2;
    }
}

Binary::Binary(char *s):Binary()
{
    int k = atoi(s);
    for(int i = 31, j = 0; k > 0; i--, j++){
        data[i] = (k % 10) * pow(10, j);
        k /= 10;
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
}

int Binary::to_int() const
{
    int res = 0;
    for(int i = 31, j = 0; j < 32; i--, j++){
        res += data[i] * pow(2, j);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    Binary b(n);
    b.show();
    return 0;
}
