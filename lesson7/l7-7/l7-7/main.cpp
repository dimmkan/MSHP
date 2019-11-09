#include <iostream>
using namespace std;
int main()
{
    int d, m;
    cin >> d >> m;
    switch (m) {
    case 1:
        if (d < 20)
        cout << "Capricorn";
        else cout << "Aquarius";
        break;
    case 2:
        if (d < 19)
        cout << "Aquarius";
        else cout << "Pisces";
        break;
    case 3:
        if (d < 21)
        cout << "Pisces";
        else cout << "Aries";
        break;
    case 4:
        if (d < 20)
        cout << "Aries";
        else cout << "Taurus";
        break;
    case 5:
        if (d < 21)
        cout << "Taurus";
        else cout << "Gemini";
        break;
    case 6:
        if (d < 22)
        cout << "Gemini";
        else cout << "Crayfish";
        break;
    case 7:
        if (d < 23)
        cout << "Crayfish";
        else cout << "Leo";
        break;
    case 8:
        if (d < 23)
        cout << "Leo";
        else cout << "Virgo";
        break;
    case 9:
        if (d < 23)
        cout << "Virgo";
        else cout << "Libra";
        break;
    case 10:
        if (d < 23)
        cout << "Libra";
        else cout << "Scorpio";
        break;
    case 11:
        if (d < 23)
        cout << "Scorpio";
        else cout << "Sagittarius";
        break;
    case 12:
        if (d < 22)
        cout << "Sagittarius";
        else cout << "Capricorn";
        break;
    default:
        break;
    }
    return 0;
}
