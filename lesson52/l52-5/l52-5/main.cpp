#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned n;
    cin >> n;
    vector<int> v(n);
    auto it = v.begin();
    for(; it < v.end(); it++){
        cin >> *it;
    }
    int s, k;
    cin >> s >> k;
    int dig_s, dig_k;
    dig_s = v.at(s-1);
    dig_k = v.at(k-1);
    v.at(s-1) = dig_k;
    v.at(k-1) = dig_s;
    for(unsigned i = s; i < k-1; i++){
        int tmp = v[i-1];
        v[i-1] = v[i];
        v[i] = tmp;
    }
    for(it = v.begin(); it < v.end(); it++){
            cout << *it << " ";
    }
    return 0;
}
