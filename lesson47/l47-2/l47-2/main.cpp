#include <iostream>
#include <cstring>

using namespace std;

class String {
    int len;
    char *str;
public:
    String(): len(0), str(nullptr){}
    String(const String&);
    String(const char *str);
    ~String();
    int length();
    String& operator=(String &src);
    bool operator==(const String &src);
    char& operator[](int);

    friend istream &operator >> (istream &, String &);
    friend ostream &operator << (ostream &, String);

};

String::String(const String &src)
{
    len = src.len;
    str = new char[len+1];
    strncpy(str, src.str, len);
    str[len] = 0;
}

String::String(const char *str)
{
    len = strlen(str);
    this->str = new char[len+1];
    strncpy(this->str, str, len);
    this->str[len] = 0;
}

String::~String()
{
    if(str){
        delete [] str;
    }
}

int String::length()
{
    return len;
}

String &String::operator=(String &src)
{
    len = src.len;
    delete [] str;
    str = new char [len+1];
    strncpy(str, src.str, len);
    str[len] = 0;
    return *this;
}

bool String::operator==(const String &src)
{
    return strcmp(str, src.str) == 0;
}

char &String::operator[](int index)
{
    if(str){
        index %= len;
        return (index < 0) ? str[len+index] : str[index];
    }
}

istream &operator >>(istream &is, String &s)
{
    int max_len = 100001;
    char tmp[max_len];
    is.getline(tmp, max_len);
    if (s.len != 0) {
        delete [] s.str;
    }
    s.len = strlen(tmp);
    s.str = new char[s.len + 1];
    for (int i = 0; i < s.len; i++) {
        s.str[i] = tmp[i];
    }
    s.str[s.len] = 0;
    return is;
}

ostream &operator <<(ostream &os, String s)
{
    os << s.str;
    return os;
}

int main()
{
    String s;
    cin >> s;
    char tmp = s[0];
    s[0] = s[s.length()-1];
    s[s.length()-1] = tmp;
    cout << s;
    return 0;
}
