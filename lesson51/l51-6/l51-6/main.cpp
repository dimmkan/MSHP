#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    for(int i = 0; i < s.length();){
        cout << s.substr(i, n) << endl;
        i += n;

    }
    return 0;
}
