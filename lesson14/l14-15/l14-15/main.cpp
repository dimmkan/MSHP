#include <iostream>
using namespace std;
int main()
{
    int n, k;
    string monthName;
    cin >> n >> k;
    int day = 1, month = 1, dayInWeek = k, days;
    while(month <= 12){
        switch (month) {
        case 1:
            monthName = "January";
            days = 31;
            break;
        case 2:
            monthName = "February";
            days = 28;
            break;
        case 3:
            monthName = "March";
            days = 31;
            break;
        case 4:
            monthName = "April";
            days = 30;
            break;
        case 5:
            monthName = "May";
            days = 31;
            break;
        case 6:
            monthName = "June";
            days = 30;
            break;
        case 7:
            monthName = "July";
            days = 31;
            break;
        case 8:
            monthName = "August";
            days = 31;
            break;
        case 9:
            monthName = "September";
            days = 30;
            break;
        case 10:
            monthName = "October";
            days = 31;
            break;
        case 11:
            monthName = "November";
            days = 30;
            break;
        case 12:
            monthName = "December";
            days = 31;
            break;
        default:
            break;
        }
    if(((day == 5 || day == 6) && dayInWeek == 6) || (dayInWeek == 4 && day % n == 0)){
        cout << day << " of " << monthName << endl;
    }
    day++;
    if(day > days){
        day = 1;
        month++;
    }
    dayInWeek = dayInWeek % 7 + 1;
    }
    return 0;
}
