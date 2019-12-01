#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    fstream in("in.txt", ios::in);

    int a, b, c;

    in >> a >> b;
    in.seekg(a+b, ios::beg);
    in >> c;

    cout << c;

    in.close();
    return 0;
}
