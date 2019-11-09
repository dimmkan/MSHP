#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    cin >> n;
    if(n<7){
        cout << "BABY";
    }else {
        if(n<18){
            cout << "SCHOOLCHILD";
        }else {
            if(n<65){
                cout << "ADULT";
            }else{
                if(n<=120){
                   cout << "ELDER";
                }else{
                   cout << "GHOST";
                }
            }
        }
    }
    return 0;
}
