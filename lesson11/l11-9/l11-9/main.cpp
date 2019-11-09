#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, count_min = 0, index_max;
    bool flag_max = true;
    cin >> n;
    int tmp_n = n;
    int min = 10, max = 0;
    do{
        int tmp = n % 10;
        min = ((tmp < min) ? tmp : min);
        max = ((tmp > max) ? tmp : max);
        n /= 10;
        count++;
    }while(n > 0);
    index_max = count;
    do{
        int tmp = tmp_n % 10;
        if(tmp == min){
            count_min++;
        }
        if(tmp == max && flag_max){
            index_max = count;
        }
        tmp_n /= 10;
        count--;
    }while(tmp_n > 0);
    cout << max << " " << min << endl;
    cout << index_max << endl;
    cout << count_min << endl;
    return 0;
}
