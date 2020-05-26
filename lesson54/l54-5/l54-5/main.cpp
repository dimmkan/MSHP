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
    sort(v.begin(), v.end());
    if(n%2 == 1){
       cout << *(v.begin() + ((n+1)/2 - 1));
    }else{
       double res = *(v.begin() + n/2 - 1) + *(v.begin()+ n/2);
       cout << res / 2;
    }
    return 0;
}
