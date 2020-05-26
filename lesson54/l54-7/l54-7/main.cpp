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
    v_int v1, v2;
    int n, k;
    cin >> n >> k;
    copy_n(in_it(cin), n, back_inserter(v1));
    copy_n(in_it(cin), k, back_inserter(v2));
    for_each(v2.begin(), v2.end(), [v1](int value){
        if(binary_search(v1.begin(), v1.end(), value)){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    });
    return 0;
}
