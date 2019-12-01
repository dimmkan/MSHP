#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    fstream in("input.txt", ios::in);
    fstream out("output.txt", ios::out);

    int data[5], i = 0, max;
    while(!in.eof()){
        in >> data[i++];
    }
    max = data[0];
    for(i = 1; i < 5; i++){
       max = (data[i] > max)?data[i]:max;
    }
    for(i = 0; i < 5; i++){
        out << max - data[i] << " ";
    }
    in.close();
    out.close();
    return 0;
}
