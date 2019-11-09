#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void toBinary(int n){
    long long int p = 1;
    while(p*2 <= n){
        p *= 2;
    }
    do{
        int d = n / p;
        cout << d;
        n %= p;
        p /= 2;
    }while(p);
}

int main() {
    char *s = new char[256];
    cin.getline(s, 256);
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        if(!isdigit(s[i])){
            cout << s[i];
        }else {
            char *w = new char[256];
            int tmp = 0;
            while(isdigit(s[i]) && i < len){
                w[tmp++] = s[i++];
            }
            w[tmp] = '\0';
            toBinary(atoll(w));
            cout << s[i];
            delete[] w;
        }
    }
    delete[] s;
    return 0;
}
