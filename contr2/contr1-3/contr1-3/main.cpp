#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int car_wheels = 0; car_wheels <= n; car_wheels += 4)
    {
          int cars = car_wheels / 4;
          int bicycles = (n - car_wheels) / 2;
          cout << bicycles << " " << cars << endl;
    }
    return 0;
}
