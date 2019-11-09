#include <iostream>
using namespace std;
int main()
{
    short n, age, num = 0;
    int income;
    cin >> n;
    short tmp_age = 0;
    int tmp_income = 0;
    for(int i = 1; i <= n; i++){
        cin >> age >> income;
        if(age > 13 && age < 30){
            if(tmp_age >= 30){
                if(income - tmp_income >= 100000){
                    num = i;
                    tmp_age = age;
                    tmp_income = income;
                }
            }else{
                if(income > tmp_income){
                    num = i;
                    tmp_age = age;
                    tmp_income = income;
                }
            }
        }else if(age >= 30){
            if(tmp_age > 13 && tmp_age < 30){
                if(tmp_income - income < 100000){
                    num = i;
                    tmp_age = age;
                    tmp_income = income;
                }
            }else{
                if(income > tmp_income){
                    num = i;
                    tmp_age = age;
                    tmp_income = income;
                }
            }
        }
    }
    cout << num;
    return 0;
}
