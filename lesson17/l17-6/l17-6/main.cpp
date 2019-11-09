#include <iostream>

using namespace std;

int main()
{
    int x, y, z, n;
    cin >> n;
    for (x = 1; x < n; x++)
    {
        for (y = 1; y < n; y++)
        {
            for (z = 1; z < n; z++)
            {
                if (x * x + y * y + z * z == n)
                    cout << x << " " << y << " " << z << endl;
            }
        }
    }
    return 0;
}
