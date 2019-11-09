#include <fstream>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;
    int count = 1;
    in.open("in.txt", ios::in);
    out.open("out.txt", ios::out);
    while(!in.eof()){
        char str[101];
        if(count == 3){
            in.getline(str, 100, '\n');
            count++;
            continue;
        }
        in.getline(str, 100, '\n');
        out << str << endl;
        count++;
    }
    in.close();
    out.close();
    return 0;
}
