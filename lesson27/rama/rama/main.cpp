#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    do{
        k = 0; // количество найденных вариантов
        n += 1;
        int i = 0; //первая составляющая куба
        while(i*i*i < n){
            int j = 0; // вторая часть куба
            while(i*i*i + j*j*j < n){
                j += 1;
            }
            if(i*i*i + j*j*j == n){
                k += 1;
            }
            i += 1;
        }

    }while(k <= 2);
    cout << n;
    return 0;
}
