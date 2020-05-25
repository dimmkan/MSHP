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
    v_int v, tmp;
    copy_n(in_it(cin), 15, back_inserter(v));
    auto min_it = min_element(v.begin(), v.end());
    auto max_it = max_element(v.begin(), v.end());
    if(min_it > max_it){
        tmp.resize(min_it - max_it + 1);
        copy(max_it, min_it+1, tmp.begin());
    }else {
        tmp.resize(max_it - min_it + 1);
        copy(min_it, max_it+1, tmp.begin());
    }
    reverse(tmp.begin(), tmp.end());
    if(min_it > max_it){
        swap_ranges(max_it, min_it+1, tmp.begin());
    }else {
        swap_ranges(min_it, max_it+1, tmp.begin());
    }
    copy(v.begin(), v.end(), out_it(cout, " "));
    return 0;
}
