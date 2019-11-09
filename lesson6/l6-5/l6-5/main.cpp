#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, donate;
    cin >> a >> b >> c >> d;
    cin >> donate;
    if(a > b){
        if(a > c){
            if(a > d){
                a -= donate;
            }else {
                d -= donate;
            }
        }else {
            if(c > d){
                c -= donate;
            }else {
                d -= donate;
            }
        }
    }else {
        if(b > c){
            if(b > d){
                b -= donate;
            }else {
                d -= donate;
            }
        } else {
            if(c > d){
                c -= donate;
            }else {
                d -= donate;
            }
        }
    }
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}
