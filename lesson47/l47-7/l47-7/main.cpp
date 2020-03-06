#include <iostream>
#include <cstring>
#include <iomanip>

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
    int find(String);
    int word_count();
    String& operator=(const String &src);
    bool operator==(const String &src);
    bool operator!=(const String &src);
    bool operator<(const String &src);
    bool operator<=(const String &src);
    bool operator>(const String &src);
    bool operator>=(const String &src);
    char& operator[](int);
    String operator()(int);
    String operator+(const String);
    String operator*(int);

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

int String::find(String t)
{
    char *pch = strstr(str, t.str);
    if(pch) return (pch-str);
    return -1;

}

int String::word_count()
{
    int cnt = 0;
    char *d = strdup(str);
    char *pch = strtok(d, " ");
    while(pch != nullptr){
        pch = strtok(nullptr, " ");
        ++cnt;
    }
    delete [] pch;
    delete [] d;
    return cnt;
}

String String::operator+(const String s)
{
    char* tmp = new char[len + s.len + 1];
    for(int i = 0; i < len + s.len; i++){
        tmp[i] = 0;
    }
    if(str) strcat(tmp, str);
    strcat(tmp, s.str);
    tmp[len + s.len] = 0;
    String res(tmp);
    delete [] tmp;
    return res;
}

String String::operator*(int k)
{
    char *tmp = new char[(len + 1) * k + 1];
    for(int i = 0; i < (len + 1) * k + 1; i++){
        tmp[i] = 0;
    }
    for(int i = 0; i < k; i++){
        strcat(tmp, str);
        strcat(tmp, "\n");
    }
    tmp[(len + 1) * k] = 0;
    String res(tmp);
    delete [] tmp;
    return res;
}

String &String::operator=(const String &src)
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

bool String::operator!=(const String &src)
{
    return strcmp(str, src.str) != 0;
}

bool String::operator<(const String &src)
{
    return strcmp(str, src.str) < 0;
}

bool String::operator<=(const String &src)
{
    return strcmp(str, src.str) <= 0;
}

bool String::operator>(const String &src)
{
    return strcmp(str, src.str) > 0;
}

bool String::operator>=(const String &src)
{
    return strcmp(str, src.str) >= 0;
}

char &String::operator[](int index)
{
    if(str){
        index %= len;
        return (index < 0) ? str[len+index] : str[index];
        }
}

String String::operator()(int index)
{
    int cnt = 0;
    char *d = strdup(str);
    if (index == 0){
        String s(strtok(d, " "));
        delete [] d;
        return s;
    }else{
        char *pch = strtok(d, " ");
        while(pch != nullptr){
            pch = strtok(nullptr, " ");
            ++cnt;
            if(cnt == index){
                String s(pch);
                delete [] d;
                return s;
            }
        }
    }
    delete [] d;
    return String("");
}

istream &operator >>(istream &is, String &s)
{
    char t[10001];
    is.getline(t, 10001);
    if (s.len != 0) delete[] s.str;
    s.len = strlen(t);
    if (t[s.len - 1] == '\r') s.len--;
    s.str = new char[s.len + 1];
    for (int i = 0; i < s.len; ++i)
        s.str[i] = t[i];
    s.str[s.len] = '\0';
    return is;
}

ostream &operator <<(ostream &os, String s)
{
    os << s.str;
    return os;
}

int main()
{
    String a;
    cin >> a;
    String res("");
    for(int i = 0; i < a.word_count(); i++){
        if(a(i) >= res){
            res = a(i);
        }
    }
    cout << res;
    return 0;
}
