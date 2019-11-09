#include <iostream>
using namespace std;
int main()
{
    short n;
    cin >> n;
    int cnt_per = n-1; //Всего перемен
    int dl_per = (n-1)/2; //Длинных перемен
    int kor_per = cnt_per - dl_per; //Коротких перемен
    int cnt_min = n*45 + dl_per*15 + kor_per*5;
    int h = 9+cnt_min/60;
    int m = cnt_min%60;
    cout << h << " " << m;
    return 0;
}
