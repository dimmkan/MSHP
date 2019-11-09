#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    in.open("in.txt", ios::in);
    char buf[4] = {}, end[] = "end", res[100000], ch;
    int count = 0, i = 0;
    while(in.get(ch)){
        if(strcmp(buf, end) == 0){
            break;
        }
        if(i > 2){
            buf[0] = buf[1];
            buf[1] = buf[2];
            buf[2] = ch;
        }else {
            buf[i++] = ch;
        }
        res[count++] = ch;
    }
    in.close();
    out.open("out.txt", ios::out);
    out << count << endl;
    for(i = 0; i < count; i++){
        out << res[i] << " ";
    }
    out.close();
    return 0;
}
