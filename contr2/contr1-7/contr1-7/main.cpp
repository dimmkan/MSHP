#include <iostream>
using namespace std;
int main()
{
    int a, b, tmp_a, tmp_b, q, p;
    cin >> a >> b;
    tmp_a = a;
    tmp_b = b;
    while(tmp_a != tmp_b){
        if (tmp_a > tmp_b){
            tmp_a -= tmp_b;
        }else{
            tmp_b -= tmp_a;
        }
    }
    p = a / tmp_a;
    q = b / tmp_a;
    cout << p << " " << q;
    return 0;

}
