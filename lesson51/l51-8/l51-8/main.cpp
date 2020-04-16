#include <iostream>
#include <string>

using namespace std;

string clear_string(string s){
    string tmp;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+'){
            continue;
        }else {
            tmp += s[i];
        }
    }
    if(tmp.length() > 10){
        tmp.erase(0,1);
    }
    return tmp;
}

int main()
{
    string s;
    cin >> s;
    s = clear_string(s);
    string code;
    string number;
    if(s.length() == 10){
        code = s.substr(0,3);
        number = s.substr(3,7);
    }else if(s.length() == 7){
        code = "495";
        number = s.substr(0,7);
    }
    for(int i = 0; i < 3; i++){
        string tmp_str;
        cin >> tmp_str;
        tmp_str = clear_string(tmp_str);
        string tmp_code;
        string tmp_number;
        if(tmp_str.length() == 10){
            tmp_code = tmp_str.substr(0,3);
            tmp_number = tmp_str.substr(3,7);
        }else if(tmp_str.length() == 7){
            tmp_code = "495";
            tmp_number = tmp_str.substr(0,7);
        }
        cout << (code == tmp_code && number == tmp_number ? "YES" : "NO") << endl;
    }
    return 0;
}
