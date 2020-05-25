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
    int n;
    cin >> n;
    copy_n(in_it(cin), n, back_inserter(v));
    auto min_it = min_element(v.begin(), v.end());
    auto max_it = max_element(v.begin(), v.end());
    iter_swap(min_it, max_it);
    copy(v.begin(), v.end(), out_it(cout, " "));
    return 0;
}
