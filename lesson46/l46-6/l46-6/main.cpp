#include <iostream>
#include <cstring>

using namespace std;

class AssocArray {
    int    len;
    int*   data;    // Дин. массив значений
    char** keys;    // Дин. массив. ключей

    int find_key(const char *key);
    void extend();
public:
    AssocArray();   // Создаёт пустой массив
    ~AssocArray();

    // Создаёт элемент с индексом key, если
    // его нет и присваивает в него 0, и
    // возвращает его.
    int &operator[] (const char* key);
    friend AssocArray operator + (const AssocArray&, int);
};

int AssocArray::find_key(const char *key)
{
    for(int i = 0; i < len; i++){
        if(!strcmp(keys[i], key)){
            return i;
        }
    }
    return -1;
}

void AssocArray::extend()
{
    int *tmp_data = new int[len+1];
    for(int i = 0; i < len; i++){
        tmp_data[i] = data[i];
    }
    tmp_data[len] = 0;
    delete [] data;
    data = tmp_data;

    char**tmp_keys = new char*[len+1];
    for(int i = 0; i < len; i++){
        tmp_keys[i] = keys[i];
    }
    tmp_keys[len] = new char[21];
    for(int i = 0; i < 21; i++){
        tmp_keys[len][i] = 0;
    }
    delete [] keys;
    keys = tmp_keys;
    ++len;
}

AssocArray::AssocArray()
{
    len = 0;
    data = new int[len];
    keys = new char*[len];
}

AssocArray::~AssocArray()
{
    delete [] data;
    for(int i = 0; i < len; i++){
        delete [] keys[i];
    }
    delete [] keys;
}

int &AssocArray::operator[](const char *key)
{
    int index = find_key(key);
    if(index == -1){
        extend();
        index = len-1;
        strncpy(keys[index], key, strlen(key));
    }
    return data[index];
}

void actions(AssocArray &m){
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        char cmd[4] = {};
        cin >> cmd;
        char key[21] = {};
        cin >> key;
        int x;
        if(!strcmp(cmd, "SET")){
            cin >> x;
            m[key] = x;
        }
        if(!strcmp(cmd, "GET")){
            cout << m[key] << endl;
        }
        if(!strcmp(cmd, "INC")){
            cin >> x;
            m[key] += x;
        }
    }
}

int main()
{   
    AssocArray m;
    actions(m);
    return 0;
}
