#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    fstream in("middle.txt", ios::in);

    int count = 0;
    char ch;
    char *data = new char[1000000];
    while(in >> ch){
       data[count++] = ch;
    }
    if(count%2 == 1) {
        cout << data[count/2];
    }else {
        cout << data[(count/2)-1] << " " << data[count/2];
    }
    in.close();
    return 0;
}
