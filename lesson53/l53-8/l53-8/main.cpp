#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector <int> v_int;
typedef istream_iterator<int> in_it;
typedef ostream_iterator<int> out_it;

bool isSimple(int n, int d = 2){
    if(n == d){
        return true;
    }
    if(n % d == 0){
        return false;
    }else {
        return isSimple(n, d+1);
    }
}

void simple_recursion (v_int &v, int n){
    if(n == 2){
        v.push_back(n);
        return;
    }else{
        if(isSimple(n)){
            v.push_back(n);
            simple_recursion(v, n-1);
        }else{
            simple_recursion(v, n-1);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    v_int v;
    simple_recursion(v, n);
    sort(v.begin(), v.end());
    copy(v.begin(), v.end(), out_it(cout, "\n"));
    return 0;
}
