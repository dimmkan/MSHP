#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef vector <int> v_int;
typedef istream_iterator<int> in_it;
typedef ostream_iterator<int> out_it;

int modify(int value){
    if(value > 0){
        return value*2;
    }else {
        return (int)floor(double(value)/2);
    }
}

int main()
{
    v_int v;
    int n;
    cin >> n;
    copy_n(in_it(cin), n, back_inserter(v));
    transform(v.begin(), v.end(), v.begin(), modify);
    copy(v.begin(), v.end(), out_it(cout, " "));
    return 0;
}
