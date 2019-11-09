#include <iostream>
using namespace std;
long long pow(long long a, unsigned int p){
    int osn = a;
    for(int i = 1; i < p; i++){
        a *= osn;
    }
    return a;
}
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << pow(x, 11)+pow(y, 5)+pow(z, 18);
    return 0;
}
