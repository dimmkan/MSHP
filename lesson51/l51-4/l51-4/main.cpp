#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.length()-t.length()+1; i++){
        int pos = s.find(t, i);
        if(pos != -1){
            cout << pos << " ";
            i = pos;
        }
    }
    return 0;
}
