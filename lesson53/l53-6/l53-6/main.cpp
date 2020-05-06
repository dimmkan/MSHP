#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector <int> v_int;
typedef istream_iterator<int> in_it;
typedef ostream_iterator<int> out_it;

bool comp(int val1, int val2){
    return val1 < val2;
}

int main()
{
    v_int v1, v2, v3;
    int n, m, k;
    cin >> n;
    copy_n(in_it(cin), n, back_inserter(v1));
    cin >> m;
    copy_n(in_it(cin), m, back_inserter(v2));
    cin >> k;
    copy_n(in_it(cin), k, back_inserter(v3));
    v1.erase(remove_if(v1.begin(), v1.end(), [v2](int val){
        auto res = find(v2.begin(), v2.end(), val);
        return res == v2.end();
    }), v1.end());
    v1.erase(remove_if(v1.begin(), v1.end(), [v3](int val){
        auto res = find(v3.begin(), v3.end(), val);
        return res == v3.end();
    }), v1.end());
    sort(v1.begin(), v1.end(), comp);
    copy(v1.begin(), v1.end(), out_it(cout, " "));
    return 0;
}
