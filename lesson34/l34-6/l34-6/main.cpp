#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    in.open("in.txt", ios::in);
    out.open("out.txt", ios::out);
    char ch[1000] = {}, str_3[1000] = {};
    int str_cnt = 0, ch_cnt = 0;
    while(in.getline(ch, 1000, '\n')){
        for(int i = 0; i < strlen(ch); i++){
            ch_cnt += (ch[i] != '\n'? 1 : 0);
        }
        str_cnt++;
        if(str_cnt == 3){
            strcpy(str_3, ch);
        }
    }
    out << str_cnt << endl << ch_cnt << endl;
    if(str_cnt > 2){
        out << str_3;
    }else {
        out << 0;
    }
    in.close();
    out.close();
    return 0;
}
