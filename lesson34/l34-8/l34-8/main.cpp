#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    fstream in;
    fstream out;
    in.open("in.txt", ios::in);
    out.open("out.txt", ios::out);
    char ch[10001] = {};
    while (in.getline(ch, 10001, '\n')) {
        out << ch << endl;
        out.seekp(-strlen(ch) - 1, ios::end);
    }
    in.close();
    out.close();
    return 0;
}
