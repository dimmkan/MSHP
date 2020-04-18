#include <iostream>
#include <vector>

using namespace std;

class Solver{
private:
    vector<int> v;
    int n, x, y;
public:
    void read_data();
    void solve();
};

void Solver::read_data()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> x >> y;
}

void Solver::solve()
{
    auto it = v.begin();
    int dig_x, dig_y;
    dig_x = v.at(x-1);
    dig_y = v.at(y-1);
    v.at(x-1) = dig_y;
    v.at(y-1) = dig_x;
    for(; it < v.end(); it++){
        cout << *it << " ";
    }
}

int main()
{
    Solver s;
    s.read_data();
    s.solve();
    return 0;
}
