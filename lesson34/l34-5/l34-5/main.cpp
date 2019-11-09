#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    in.open("in.txt", ios::in);
    out.open("out.txt", ios::out);
    int count = 0;
    char ch[10001];
    char **res = new char* [5001];
    for(int i = 0; i < 5001; i++){
        res[i] = new char[10001];
    }
    while(!in.eof()){
        in.getline(ch, 10001, '\n');
        strcpy(res[count++], ch);
    }

    for(int i = 0; i < count-1; i++){
        out << res[i] << endl;
    }
    in.close();
    out.close();
    for(int i = 0; i < 5001; i++){
        delete[] res[i];
    }
    delete[] res;
    return 0;
}
