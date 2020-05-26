#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector <int> v_int;
typedef istream_iterator<int> in_it;
typedef ostream_iterator<int> out_it;

void read_value(v_int &v){
    int val;
    cin >> val;
    if(val){
        v.push_back(val);
        read_value(v);
    }
}

int main()
{
    v_int v;
    read_value(v);
    copy(v.begin(), v.end(), out_it(cout, " "));
    cout << endl;
    sort(v.begin(), v.end());
    auto finish = unique(v.begin(), v.end());
    auto min_1 = min_element(v.begin(), finish);
    cout << *min_1 << " ";
    remove(v.begin(), finish, *min_1);
    auto min_2 = min_element(v.begin(), finish);
    cout << *min_2;
    return 0;
}
