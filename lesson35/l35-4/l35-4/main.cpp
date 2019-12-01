#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    fstream in("in.txt", ios::in);
    fstream out("out.txt", ios::out);

    char ch;
    int count = 0;
    in.seekg(0, ios::end);
    count = in.tellg();
    in.seekg(0, ios::beg);
    for(int i = 0; i<count/2; i++){
        in.seekg(i, ios::beg);
        in.get(ch);
        out << ch;
        in.seekg(-i-1, ios::end);
        in.get(ch);
        out << ch;
    }
    if(count%2 == 1){
        in.seekg(count/2, ios::beg);
        in.get(ch);
        out << ch;
    }
    in.close();
    out.close();
    return 0;
}
