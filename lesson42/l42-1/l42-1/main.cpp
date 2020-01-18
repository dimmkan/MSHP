#include <fstream>
#include <cstring>

using namespace std;

void shiftStr(char *str){
    char c[1001] = {};
    for(size_t i = 0; i < strlen(str) - 1; i++){
        c[i] = str[i+1];
    }
    for(size_t i = 0; i < strlen(str) - 1; i++){
        str[i+1] = 0;
    }
    strcpy(str, c);
}

int main()
{
    fstream fin("in.txt", ios::in);
    fstream fout("out.txt", ios::out);
    char c[1001];
    while(!fin.eof()){
        fin.getline(c, 1001, '\n');
        shiftStr(c);
        fout << c << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
