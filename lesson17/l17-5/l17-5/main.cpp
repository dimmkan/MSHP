#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    int l, r;
    cin >> l >> r;
    for (x = l; x <= r; x++)
    {
        for (y = l; y <= r; y++)
        {
            for (z = l; z <= r; z++)
            {
                if (x * x + y * y == z * z)
                    cout << x << " " << y << " " << z << endl;
            }
        }
    }
    return 0;
}
