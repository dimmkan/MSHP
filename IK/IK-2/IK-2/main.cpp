#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

typedef vector <int> v_int;
typedef istream_iterator<int> in_it;
typedef ostream_iterator<int> out_it;

int main()
{
    v_int v;
    set<int> s;
    int n, k;
    cin >> n >> k;
    copy_n(in_it(cin), n, back_inserter(v));
    for(auto it = v.begin(); it != v.end()-1; it++){
        for(auto jt = it+1; jt != v.end(); jt++){
            if(abs(*it - *jt) >= k){
                s.insert(*it);
            }
        }
    }
    cout << s.size();
    return 0;
}
