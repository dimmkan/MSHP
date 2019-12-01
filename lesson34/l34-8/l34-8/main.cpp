#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    fstream in("in.txt", ios::in);
    fstream out("out.txt", ios::out);

    char **data = new char*[102400];

    int i = 0;
    while(!in.eof()){
        char s[102401] = {};
        in.getline(s, 102401);
        int len = strlen(s)+1;
        data[i] = new char[len];
        for(int j = 0; j < len; j++){
            data[i][j] = 0; // '\0'
        }
        strncpy(data[i++], s, len-1);
    }

    for(int j = i-2; j >= 0; j--){
        out << data[j] << endl;
    }

    for(int j = 0; j < i; j++){
        delete [] data[j];
    }

    delete [] data;

    in.close();
    out.close();
    return 0;
}
