#include <iostream>
using namespace std;
int main()
{
    short int s;
    cin >> s;
    if(s==0){
        cout << "LOSE";
    }
    if(s==1){
        cout << "DRAW";
    }
    if(s==3){
        cout << "WIN";
    }
    return 0;
}
