#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

int countChar(char *str){
    int count = 0;
    for(size_t i = 0; i < strlen(str); i++){
        count += (str[i] != '\n' || str[i] != '\r' ? 1 : 0);
    }
    return count;
}

int main()
{
    fstream fin("in.txt", ios::in);
    char c[1001];
    while(!fin.eof()){
        fin.getline(c, 1001, '\n');
        cout << countChar(c) << " ";
    }
    fin.close();
    return 0;
}
