#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    fstream in("in.txt", ios::in);
    fstream out("out.txt", ios::out);

    char ch;
    int count = 0;
    while(in >> ch){
        count++;
    }
    in.seekg(0, ios_base::beg);
    for(int i = 0; i<count/2; i++){
        in.seekg(i, ios_base::beg);
        in >> ch;
        out << ch;
        in.seekg(-i-1, ios_base::end);
        in >> ch;
        out << ch;
    }
    in.close();
    out.close();
    return 0;
}
