#include <iostream>
using namespace std;
int main()
{
    unsigned int k;
    cin >> k;
    string s="let";
    k = k%100; //Отрежем 10-ки
    int dec = k/10;
    int ed = k%10;
    if (ed == 1 && dec != 1){
        s = "god";
    }else {
        if(ed>1 && ed<5 && dec != 1){
            s = "goda";
        }else {
            s = "let";
        }
    }
    cout << "Mne " << k << " " << s;
    return 0;
}
