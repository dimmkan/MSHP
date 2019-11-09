#include <iostream>
using namespace std;
int main()
{
    short n, e;
    cin >> n;
    int h_boy = 0, h_girl = 0;
    short c_boy = 0, c_girl = 0, i = 0;
    while(i < n){
        cin >> e;
        if(e < 0){
            e *= -1;
            h_boy += e;
            c_boy++;
        }else {
            h_girl += e;
            c_girl++;
        }
        i++;
    }
    cout << (h_boy/c_boy) << " " << (h_girl/c_girl);
    return 0;
}
