#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
    fstream fout;
    fout.open("output.txt", ios::out);
    int n, k, position;
    char *word = new char[1001];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        fout << ' ';
    }
    for (int i = 0; i < k; i ++) {
        cin >> position >> word;
        fout.seekp(position, ios::beg);
        fout << word;
    }
    fout.close();
    delete [] word;
    return 0;
}
