#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int p = 1;
    while(p*16 <= n){
        p *= 16;
    }
    do{
        int d = n / p;
        if(d < 10){
            cout << d;
        }else{
            switch (d) {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                break;
            }
        }
        n %= p;
        p /= 16;
    }while(p);
    return 0;
}
