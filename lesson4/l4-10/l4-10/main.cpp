#include <iostream>

using namespace std;

int main() {
  int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (n > m) {
        int k = n;
        n = m;
        m = k;
    }
    int min_dist = x;
    if(n-x < min_dist){
        min_dist = n-x;
    }
    if(y < min_dist){
        min_dist = y;
    }
    if(m-y < min_dist){
        min_dist = m-y;
    }
    cout << min_dist;
  return 0;
}
