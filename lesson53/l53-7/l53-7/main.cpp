#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>


using namespace std;

typedef vector <int> v_int;
typedef istream_iterator<int> in_it;
typedef ostream_iterator<int> out_it;

void recursive_simple(v_int &v, int n, int div){
    if (n == 1) return;
      if (n%div == 0)
      {
        v.push_back(div);
        recursive_simple(v, n / div, div);
      }
      else
        if (div == 2)
          recursive_simple(v, n, div + 1);
        else
          recursive_simple(v, n, div + 2);
}

int main()
{    
    int n;
    cin >> n;
    v_int v;
    recursive_simple(v, n, 2);
    auto vEnd = unique(v.begin(), v.end());
    copy(v.begin(), vEnd, out_it(cout, " "));
    return 0;
}
