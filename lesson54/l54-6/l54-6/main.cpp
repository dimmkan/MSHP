#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector <int> v_int;
typedef istream_iterator<int> in_it;
typedef ostream_iterator<int> out_it;



int main()
{
    v_int v;
    int n, a;
    cin >> n >> a;
    copy_n(in_it(cin), n, back_inserter(v));
    auto f = find_if(v.begin(), v.end(), [a](int val){
        return val > a;
    });
    cout << f - v.begin() << " " << *(f-1) << endl;
    cout << f + 1 - v.begin() << " " << *f;
    return 0;
}
