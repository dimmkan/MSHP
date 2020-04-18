#include <iostream>
#include <vector>

using namespace std;

class Solver{
private:
    int n;
    vector<int> v;
    bool check(int index, int value);
public:
    void read_data();
    void solve();
};

bool Solver::check(int index, int value)
{
    for(int i = index-1; i >= 0; i--){
        if(v[i] == value){
            return true;
        }
    }
    return false;
}

void Solver::read_data()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
}

void Solver::solve()
{
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(!check(i, v[i])) cnt++;
    }
    cout << cnt;
}

int main()
{
    Solver s;
    s.read_data();
    s.solve();
    return 0;
}
