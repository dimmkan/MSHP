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
    int k, x;
    cin >> k >> x;
    v.insert(v.begin()+k, x);
    for(it = v.begin(); it < v.end(); it++){
        cout << *it << " ";
    }
    return 0;
}
