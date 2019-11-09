#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp_i = i;
        while(tmp_i >= 0){
            cout << char(ch+i);
            tmp_i--;
        }
        cout << endl;
    }
    return 0;
}
