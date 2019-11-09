#include <fstream>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;

    in.open("in.txt", ios::in);
    out.open("out.txt", ios::out);
    int a, b;
    in >> a >> b;
    in.close();
    out << a+b << endl << a-b << endl << a*b;
    out.close();
    return 0;
}
