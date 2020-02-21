#include <iostream>
#include <cstring>

using namespace std;

class AssocArray {
    int    len;
    int*   data;    // Дин. массив значений
    char** keys;    // Дин. массив. ключей

public:
    AssocArray();   // Создаёт пустой массив
    ~AssocArray();

    // Создаёт элемент с индексом key, если
    // его нет и присваивает в него 0, и
    // возвращает его.
    int &operator[] (const char* key);
    friend AssocArray operator + (const AssocArray&, int);
};

AssocArray::AssocArray()
{
    len = 0;
    data = new int[len];
    keys = new char*[len];
    for(int i = 0; i < 25; i++){

    }
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
    int index;
    if(this->len == 0){
        index = len;
        data[index] = 0;
        strcpy(keys[this->len++], key);
    }else{
        for(int i = 0; i < len; i++){
            if(!strcmp(keys[this->len++],key)){
                return data[i];
            }
        }
        index = len;
        strcpy(keys[this->len++], key);
    }
    return data[index];
}

int main()
{
    int k;
    cin >> k;
    AssocArray a;
    for(int i = 0; i < k; i++){
        char cmd[25], w[25];
        int tmp;
        cin >> cmd;
        if(strcmp(cmd,"SET")){
            cin >> w >> tmp;
            a[w] = tmp;
        }else if(strcmp(cmd,"INC")){
            cin >> w >> tmp;
            cout << a[w] << endl;
        }else if(strcmp(cmd,"GET")){
            cin >> w;
            cout << a[w] << endl
                    ;
        }
    }
    return 0;
}
