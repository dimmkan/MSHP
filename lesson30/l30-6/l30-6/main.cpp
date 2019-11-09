#include <iostream>

using namespace std;

bool isSimple(int n, int d = 2){
    if(n == d){
        return true;
    }
    if(n % d == 0){
        return false;
    }else {
        return isSimple(n, d+1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << (isSimple(n)?"YES":"NO");
    return 0;
}
