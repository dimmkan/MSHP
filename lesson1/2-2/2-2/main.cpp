#include <iostream>

using namespace std;

int main()
{
    int x,y,z; //Первоначальное значение чужачков, дубиков и липочек.
    int m,n; //Курс чужачков по отношению к дубикам и липочкам.

    cin >> x >> y >> z;
    cin >> m >> n;

    y = y+m*x; //Кол-во дубиков после обмена
    z = z+n*x; //Кол-во липочек после обмена

    if (z >= 100){
        int ost = z % 100;
        int dob = z / 100;
        z = ost;
        y = y + dob;
    }

    cout << y << " " << z;



    return 0;
}
