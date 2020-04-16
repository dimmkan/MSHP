#include <iostream>
#include <string>

using namespace std;

string new_string(string s){
    string tmp;
    for(int i = 0; i < s.length();){
        char digit = s[i];
        int cnt = 0;
        while(digit == s[i] && i < s.length()){
            cnt++;
            i++;
        }
        tmp += to_string(cnt);
        tmp += digit;
    }
    return tmp;
}

int main()
{
    string s;
    int k;
    cin >> s >> k;
    for(int i = 0; i < k-1; i++){
        s = new_string(s);
    }
    cout << s;
    return 0;
}
