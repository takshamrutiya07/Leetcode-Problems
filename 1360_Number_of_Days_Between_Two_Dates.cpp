#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool check_leap_year(int y)
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            return true;
        }
        return false;
    }
    int totalDays(int y, int m, int d)
    {
        int count = 0;
        for (int i = 0; i < y; i++)
        {
            if (check_leap_year(i))
                count += 366;
            else
                count += 365;
        }

        int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if (check_leap_year(y))
            month[1] = 29;

        for (int i = 0; i < m - 1; i++)
        {
            count += month[i];
        }
        count += d;
        return count;
    }
    int daysBetweenDates(string date1, string date2)
    {
        int y1, y2, m1, m2, d1, d2;

        y1 = stoi(date1.substr(0, 4));
        y2 = stoi(date2.substr(0, 4));

        m1 = stoi(date1.substr(5, 2));
        m2 = stoi(date2.substr(5, 2));

        d1 = stoi(date1.substr(8, 2));
        d2 = stoi(date2.substr(8, 2));

        int days1 = totalDays(y1, m1, d1);
        int days2 = totalDays(y2, m2, d2);

        return abs(days2 - days1);
    }
};
int main()
{
    Solution s;
    string date1 = "2020-01-15", date2 = "2019-12-31";
    cout << s.daysBetweenDates(date1, date2);
    return 0;
}