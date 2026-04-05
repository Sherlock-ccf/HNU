#include <iostream>
#include <ctime>
using namespace std;
// 计算星期几，返回值为0-6，分别代表星期六、星期日、星期一...星期五
int getWeekDay(int year, int month, int day)
{
    if (month < 3)
    {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int h = day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j;
    h = h % 7;
    return h;
}

// 将天数转换为年月日
void convertDaysToDate(int days, int &year, int &month, int &day)
{
    const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const int daysInMonth2[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    year = 2000;
    while (days >= 365)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (days < 366)
                break;
            days -= 366;
        }
        else
        {
            if (days < 365)
                break;
            days -= 365;
        }
        year++;
    }
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        for (int i = 0; i < 12; i++)
        {
            if (days < daysInMonth2[i])
            {
                month = i + 1;
                day = days + 1;
                break;
            }
            else
            {
                days -= daysInMonth2[i];
            }
        }
    }
    else
    {
        for (int i = 0; i < 12; i++)
        {
            if (days < daysInMonth[i])
            {
                month = i + 1;
                day = days + 1;
                break;
            }
            else
            {
                days -= daysInMonth[i];
            }
        }
    }
}
const char *weekDays[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
int main()
{
    int days;
    while (cin >> days)
    {
        if (days == -1)
            break;
        int year, month, day;
        convertDaysToDate(days, year, month, day);
        int weekDay = getWeekDay(year, month, day);
        cout << year << "-";
        if (month < 10)
            cout << "0";
        cout << month << "-";
        if (day < 10)
            cout << "0";
        cout << day << " ";
        cout << weekDays[weekDay] << endl;
    }
    return 0;
}