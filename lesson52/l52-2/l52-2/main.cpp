#include <iostream>
#include <vector>

using namespace std;

void out_index(vector<int> v, int k){
    for(unsigned i = 0; i < v.size() - 1; i++){
        if(v[i] == v[i+1] && v[i] == k){
            cout << i+1 << " " << i+2;
            return;
        }
    }
    cout << 0;
}

int main()
{
    int n, k;
    cin >> n;
    vector<int> v(n);
    auto it = v.begin();
    for(;it < v.end(); it++){
        cin >> *it;
    }
    cin >> k;
    out_index(v, k);
    return 0;
}
