#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector <int> v_int;
typedef istream_iterator<int> in_it;
typedef ostream_iterator<int> out_it;

bool action(int value){
    return value%10 == 0;
}

int main()
{
    v_int v;
    int n;
    cin >> n;
    copy_n(in_it(cin), n, back_inserter(v));
    copy_if(v.begin(), v.end(), out_it(cout, " "), action);
    return 0;
}
