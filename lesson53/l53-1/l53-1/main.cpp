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
    copy_n(in_it(cin), 15, back_inserter(v));
    reverse(v.begin()+2, v.begin()+9);
    copy(v.begin(), v.end(), out_it(cout, " "));
    return 0;
}
