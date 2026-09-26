// 1. Length of a Month

#include "library.h"

int length_of_a_month(const int month, const int year)

{
    if (month == 1) return 31;
    if (month == 2)
    {
        if (year % 4 == 0) return 29;
        else return 28;
    }
    if (month == 3) return 31;
    if (month == 4) return 30;
    if (month == 5) return 31;
    if (month == 6) return 30;
    if (month == 7) return 31;
    if (month == 8) return 31;
    if (month == 9) return 30;
    if (month == 10) return 31;
    if (month == 11) return 30;
    if (month == 12) return 31;
    int days = length_of_a_month(month, year);

}

int main()
{
    length_of_a_month(2, 2008);
    int month = 2;
    int year = 2008;
    int days = length_of_a_month(month, year);
    {
        cout << "February " << year << " has " << days << " days." << endl;
    }
}

// 2. Day of the Year

#include "library.h"
#include <string>

int length_of_a_month(const int month, const int year)
{
    if (month == 1) return 31;
    if (month == 2)
    {
        if (year % 4 == 0) return 29;
        else return 28;
    }
    if (month == 3) return 31;
    if (month == 4) return 30;
    if (month == 5) return 31;
    if (month == 6) return 30;
    if (month == 7) return 31;
    if (month == 8) return 31;
    if (month == 9) return 30;
    if (month == 10) return 31;
    if (month == 11) return 30;
    if (month == 12) return 31;
    int days = length_of_a_month(month, year);

}

int day_of_the_year(const int day, const int month, const int year)
{
    int total_days = 0;
    for (int m = 1; m < month; m++)
    {
        total_days += length_of_a_month(m, year);
    }
    total_days += day;
    return total_days;
}

string month_name(int month)
{
    if (month == 1) return "January";
    if (month == 2) return "February";
    if (month == 3) return "March";
    if (month == 4) return "April";
    if (month == 5) return "May";
    if (month == 6) return "June";
    if (month == 7) return "July";
    if (month == 8) return "August";
    if (month == 9) return "September";
    if (month == 10) return "October";
    if (month == 11) return "November";
    if (month == 12) return "December";
}

string day_suffix(int day)
{
    if (day % 10 == 1 && day != 11) return "st";
    if (day % 10 == 2 && day != 12) return "nd";
    if (day % 10 == 3 && day != 13) return "rd";
    return "th";
}

int main()
{
    int day = 30;
    int month = 9;
    int year = 2025;
    int total = day_of_the_year(30, 9, 2025);

    cout << "The " << day << day_suffix(day) << " of " << month_name(month) << " is the " << total << day_suffix(total) << " day of the year." << endl;
}

// 3. Day of the Century

#include "library.h"
#include <string>

int length_of_a_month(const int month, const int year)
{
    if (month == 1) return 31;
    if (month == 2)
    {
        if (year % 4 == 0) return 29;
        else return 28;
    }
    if (month == 3) return 31;
    if (month == 4) return 30;
    if (month == 5) return 31;
    if (month == 6) return 30;
    if (month == 7) return 31;
    if (month == 8) return 31;
    if (month == 9) return 30;
    if (month == 10) return 31;
    if (month == 11) return 30;
    if (month == 12) return 31;
    int days = length_of_a_month(month, year);

}

int day_of_the_year(const int day, const int month, const int year)
{
    int total_days = 0;
    for (int m = 1; m < month; m++)
    {
        total_days += length_of_a_month(m, year);
    }
    total_days += day;
    return total_days;
}

string month_name(int month)
{
    if (month == 1) return "January";
    if (month == 2) return "February";
    if (month == 3) return "March";
    if (month == 4) return "April";
    if (month == 5) return "May";
    if (month == 6) return "June";
    if (month == 7) return "July";
    if (month == 8) return "August";
    if (month == 9) return "September";
    if (month == 10) return "October";
    if (month == 11) return "November";
    if (month == 12) return "December";
}

string day_suffix(int day)
{
    if (day % 10 == 1 && day != 11) return "st";
    if (day % 10 == 2 && day != 12) return "nd";
    if (day % 10 == 3 && day != 13) return "rd";
    return "th";
}

int day_of_the_century(const int day, const int month, const int year, const int century)
{
    int total_days_of_century = 0;
    for (int d = 1; d < month; d++)
    {
        total_days_of_century += day_of_the_year(d, month, year);
    }
    total_days_of_century += day;
    return total_days_of_century;
}

int main()
{
    int day = 30;
    int month = 9;
    int year = 2025;
    int century = 2000-2099;
    int total = day_of_the_century(30, 9, 2025, century);

    cout << "The " << day << day_suffix(day) << " of " << month_name(month) << " " << year << " is the " << total << day_suffix(total) << " day of the century." << endl;
}

// 4. Day of Forever

#include "library.h"
#include <string>

int length_of_a_month(const int month, const int year)
{
    if (month == 1) return 31;
    if (month == 2)
    {
        if (year % 4 == 0) return 29;
        else return 28;
    }
    if (month == 3) return 31;
    if (month == 4) return 30;
    if (month == 5) return 31;
    if (month == 6) return 30;
    if (month == 7) return 31;
    if (month == 8) return 31;
    if (month == 9) return 30;
    if (month == 10) return 31;
    if (month == 11) return 30;
    if (month == 12) return 31;
    const int days = length_of_a_month(month, year);

}

int day_of_the_year(const int day, const int month, const int year)
{
    int total_days = 0;
    for (int m = 1; m < month; m++)
    {
        total_days += length_of_a_month(m, year);
    }
    total_days += day;
    return total_days;
}

string month_name(int month)
{
    if (month == 1) return "January";
    if (month == 2) return "February";
    if (month == 3) return "March";
    if (month == 4) return "April";
    if (month == 5) return "May";
    if (month == 6) return "June";
    if (month == 7) return "July";
    if (month == 8) return "August";
    if (month == 9) return "September";
    if (month == 10) return "October";
    if (month == 11) return "November";
    if (month == 12) return "December";
}

string day_suffix(int day)
{
    if (day % 10 == 1 && day != 11) return "st";
    if (day % 10 == 2 && day != 12) return "nd";
    if (day % 10 == 3 && day != 13) return "rd";
    return "th";
}

int day_of_the_century(const int day, const int month, const int year, const int century)
{
    int total_days_of_century = 0;
    for (int d = 1; d < month; d++)
    {
        total_days_of_century += day_of_the_year(d, month, year);
    }
    total_days_of_century += day;
    return total_days_of_century;
}

int day_of_forever(const int day, const int month, const int year)
{
    int total_days = 0;

    for (int y = 0; y < year; y++)
    {
        if (y % 400 == 0) total_days += 366;
        else if (y % 100 == 0) total_days += 365;
        else if (y % 4 == 0) total_days += 366;
        else total_days += 365;
    }
    total_days += day_of_the_year(day, month, year);
    return total_days;
}

int main()
{
    int day = 30;
    int month = 9;
    int year = 2025;

    int total = day_of_forever(day, month, year);

    cout << "The " << day << day_suffix(day) << " of " << month_name(month) << " " << year << " was day number " << total << "." << endl;

    //sample testing//
    cout << "The 1st of January 2000 is day number " << day_of_forever(1, 1, 2000) << endl;
    cout << "The 1st of January 1900 is day number " << day_of_forever(1, 1, 1900) << endl;
    cout << "The 4th of July 1776 is day number " << day_of_forever(4, 7, 1776) << endl;
    cout << "The 1st of October 2024 is day number " << day_of_forever(1, 10, 2024) << endl;
    cout << "The 7th of October 2024 is day number " << day_of_forever(7, 10, 2024) << endl;
    cout << "The 27th of November 2737 is day number " << day_of_forever(27, 11, 2737) << endl;
    cout << "The 1st of January 10 A.D. is day number " << day_of_forever(1, 1, 10) << endl;
}

// 5. Day of the Week

#include "library.h"
#include <string>

int length_of_a_month(const int month, const int year)
{
    if (month == 1) return 31;
    if (month == 2)
    {
        if (year % 4 == 0) return 29;
        else return 28;
    }
    if (month == 3) return 31;
    if (month == 4) return 30;
    if (month == 5) return 31;
    if (month == 6) return 30;
    if (month == 7) return 31;
    if (month == 8) return 31;
    if (month == 9) return 30;
    if (month == 10) return 31;
    if (month == 11) return 30;
    if (month == 12) return 31;
    const int days = length_of_a_month(month, year);

}

int day_of_the_year(const int day, const int month, const int year)
{
    int total_days = 0;
    for (int m = 1; m < month; m++)
    {
        total_days += length_of_a_month(m, year);
    }
    total_days += day;
    return total_days;
}

string month_name(int month)
{
    if (month == 1) return "January";
    if (month == 2) return "February";
    if (month == 3) return "March";
    if (month == 4) return "April";
    if (month == 5) return "May";
    if (month == 6) return "June";
    if (month == 7) return "July";
    if (month == 8) return "August";
    if (month == 9) return "September";
    if (month == 10) return "October";
    if (month == 11) return "November";
    if (month == 12) return "December";
}

string day_suffix(int day)
{
    if (day % 10 == 1 && day != 11) return "st";
    if (day % 10 == 2 && day != 12) return "nd";
    if (day % 10 == 3 && day != 13) return "rd";
    return "th";
}

int day_of_the_century(const int day, const int month, const int year, const int century)
{
    int total_days_of_century = 0;
    for (int d = 1; d < month; d++)
    {
        total_days_of_century += day_of_the_year(d, month, year);
    }
    total_days_of_century += day;
    return total_days_of_century;
}

int day_of_forever(const int day, const int month, const int year)
{
    int total_days = 0;

    for (int y = 1; y < year; y++)
    {
        if (y % 400 == 0) total_days += 366;
        else if (y % 100 == 0) total_days += 365;
        else if (y % 4 == 0) total_days += 366;
        else total_days += 365;
    }

    total_days += day_of_the_year(day, month, year);
    return total_days;
}

int day_of_the_week(const int day, const int month, const int year)
{
    const int week = day_of_forever(day, month, year);
    return week % 7;
}

string week_name(int week)
{
    if (week == 0) return "Sunday";
    if (week == 1) return "Monday";
    if (week == 2) return "Tuesday";
    if (week == 3) return "Wednesday";
    if (week == 4) return "Thursday";
    if (week == 5) return "Friday";
    if (week == 6) return "Saturday";
    return "";
}

int main()
{
    int day = 30;
    int month = 9;
    int year = 2025;
    int week = day_of_the_week(day, month, year);

    cout << "The " << day << day_suffix(day) << " of " << month_name(month) << " " << year << " was a " << week_name(week) << "." << endl;

    //sample testing//
    cout << "The 1st of January 2000 was a " << week_name(day_of_the_week(1, 1, 2000)) << "." << endl;
    cout << "The 1st of January 1900 was a " << week_name(day_of_the_week(1, 1, 1900)) << "." << endl;
    cout << "The 4th of July 1776 was a " << week_name(day_of_the_week(4, 7, 1776)) << "." << endl;
    cout << "The 1st of October 2024 was a " << week_name(day_of_the_week(1, 10, 2024)) << "." << endl;
    cout << "The 7th of October 2024 was a " << week_name(day_of_the_week(7, 10, 2024)) << "." << endl;
    cout << "The 27th of November 2737 will be a " << week_name(day_of_the_week(27, 11, 2737)) << "." << endl;
    cout << "The 1st of January 10 A.D. was a " << week_name(day_of_the_week(1, 1, 10)) << "." << endl;
}

// 6. A Calendar for a Month

#include "library.h"
#include <string>

int length_of_a_month(const int month, const int year)
{
    if (month == 1) return 31;
    if (month == 2)
    {
        if (year % 4 == 0) return 29;
        else return 28;
    }
    if (month == 3) return 31;
    if (month == 4) return 30;
    if (month == 5) return 31;
    if (month == 6) return 30;
    if (month == 7) return 31;
    if (month == 8) return 31;
    if (month == 9) return 30;
    if (month == 10) return 31;
    if (month == 11) return 30;
    if (month == 12) return 31;
    const int days = length_of_a_month(month, year);

}

int day_of_the_year(const int day, const int month, const int year)
{
    int total_days = 0;
    for (int m = 1; m < month; m++)
    {
        total_days += length_of_a_month(m, year);
    }
    total_days += day;
    return total_days;
}

string month_name(int month)
{
    if (month == 1) return "January";
    if (month == 2) return "February";
    if (month == 3) return "March";
    if (month == 4) return "April";
    if (month == 5) return "May";
    if (month == 6) return "June";
    if (month == 7) return "July";
    if (month == 8) return "August";
    if (month == 9) return "September";
    if (month == 10) return "October";
    if (month == 11) return "November";
    if (month == 12) return "December";
}

string day_suffix(int day)
{
    if (day % 10 == 1 && day != 11) return "st";
    if (day % 10 == 2 && day != 12) return "nd";
    if (day % 10 == 3 && day != 13) return "rd";
    return "th";
}

int day_of_the_century(const int day, const int month, const int year, const int century)
{
    int total_days_of_century = 0;
    for (int d = 1; d < month; d++)
    {
        total_days_of_century += day_of_the_year(d, month, year);
    }
    total_days_of_century += day;
    return total_days_of_century;
}

int day_of_forever(const int day, const int month, const int year)
{
    int total_days = 0;

    for (int y = 1; y < year; y++)
    {
        if (y % 400 == 0) total_days += 366;
        else if (y % 100 == 0) total_days += 365;
        else if (y % 4 == 0) total_days += 366;
        else total_days += 365;
    }

    total_days += day_of_the_year(day, month, year);
    return total_days;
}

int day_of_the_week(const int day, const int month, const int year)
{
    const int week = (day_of_forever(day, month, year) + 6) % 7;
    return week;
}

string week_name(int week)
{
    if (week == 0) return "Mon";
    if (week == 1) return "Tue";
    if (week == 2) return "Wed";
    if (week == 3) return "Thu";
    if (week == 4) return "Fri";
    if (week == 5) return "Sat";
    if (week == 6) return "Sun";
    return "";
}

void draw_calendar(int month, int year)
{
    cout << " ----------------------------------" << endl;
    cout << "|           " << month_name(month) << " " << year << "           |" << endl;
    cout << " ----------------------------------" << endl;
    cout << "|Mon  Tue  Wed  Thu  Fri  Sat  Sun |" << endl;

    int first_day_of_the_week = day_of_the_week(1, month, year);
    int days = length_of_a_month(month, year);
    int number_of_days = 0;

    cout << " ----------------------------------" << endl;

    for (int i = 0; i < first_day_of_the_week; i++)
    {
        cout << "|    ";
        number_of_days++;
    }

    for (int d = 1; d <= days; d++)
    {
        if (d < 10) cout << "|  " << d << " ";
        else cout << "| " << d << " ";
        number_of_days++;

        if (number_of_days % 7 == 0)
        {
            cout << "|" << endl;
            cout << " ----------------------------------" << endl;
        }
    }

    if (number_of_days % 7 != 0)
    {
        int remaining = 7 - (number_of_days % 7);
        for (int i = 0; i < remaining; i++)
        cout << "|    ";
        cout << "|" << endl;
        cout << " ----------------------------------" << endl;
    }
}

int main()
{
    draw_calendar(10, 2025);
}

// 7. A Solid Product

#include "library.h"
#include <string>

int length_of_a_month(const int month, const int year)
{
    if (month == 1) return 31;
    if (month == 2)
    {
        if (year % 4 == 0) return 29;
        else return 28;
    }
    if (month == 3) return 31;
    if (month == 4) return 30;
    if (month == 5) return 31;
    if (month == 6) return 30;
    if (month == 7) return 31;
    if (month == 8) return 31;
    if (month == 9) return 30;
    if (month == 10) return 31;
    if (month == 11) return 30;
    if (month == 12) return 31;
    const int days = length_of_a_month(month, year);

}

int day_of_the_year(const int day, const int month, const int year)
{
    int total_days = 0;
    for (int m = 1; m < month; m++)
    {
        total_days += length_of_a_month(m, year);
    }
    total_days += day;
    return total_days;
}

string month_name(int month)
{
    if (month == 1) return "January";
    if (month == 2) return "February";
    if (month == 3) return "March";
    if (month == 4) return "April";
    if (month == 5) return "May";
    if (month == 6) return "June";
    if (month == 7) return "July";
    if (month == 8) return "August";
    if (month == 9) return "September";
    if (month == 10) return "October";
    if (month == 11) return "November";
    if (month == 12) return "December";
}

string day_suffix(int day)
{
    if (day % 10 == 1 && day != 11) return "st";
    if (day % 10 == 2 && day != 12) return "nd";
    if (day % 10 == 3 && day != 13) return "rd";
    return "th";
}

int day_of_the_century(const int day, const int month, const int year, const int century)
{
    int total_days_of_century = 0;
    for (int d = 1; d < month; d++)
    {
        total_days_of_century += day_of_the_year(d, month, year);
    }
    total_days_of_century += day;
    return total_days_of_century;
}

int day_of_forever(const int day, const int month, const int year)
{
    int total_days = 0;

    for (int y = 1; y < year; y++)
    {
        if (y % 400 == 0) total_days += 366;
        else if (y % 100 == 0) total_days += 365;
        else if (y % 4 == 0) total_days += 366;
        else total_days += 365;
    }

    total_days += day_of_the_year(day, month, year);
    return total_days;
}

int day_of_the_week(const int day, const int month, const int year)
{
    const int week = (day_of_forever(day, month, year) + 6) % 7;
    return week;
}

string week_name(int week)
{
    if (week == 0) return "Mon";
    if (week == 1) return "Tue";
    if (week == 2) return "Wed";
    if (week == 3) return "Thu";
    if (week == 4) return "Fri";
    if (week == 5) return "Sat";
    if (week == 6) return "Sun";
    return "";
}

void draw_calendar(int month, int year)
{
    cout << " ----------------------------------" << endl;
    cout << "|           " << month_name(month) << " " << year << "           |" << endl;
    cout << " ----------------------------------" << endl;
    cout << "|Mon  Tue  Wed  Thu  Fri  Sat  Sun |" << endl;

    int first_day_of_the_week = day_of_the_week(1, month, year);
    int days = length_of_a_month(month, year);
    int number_of_days = 0;

    cout << " ----------------------------------" << endl;

    for (int i = 0; i < first_day_of_the_week; i++)
    {
        cout << "|    ";
        number_of_days++;
    }

    for (int d = 1; d <= days; d++)
    {
        if (d < 10) cout << "|  " << d << " ";
        else cout << "| " << d << " ";
        number_of_days++;

        if (number_of_days % 7 == 0)
        {
            cout << "|" << endl;
            cout << " ----------------------------------" << endl;
        }
    }

    if (number_of_days % 7 != 0)
    {
        int remaining = 7 - (number_of_days % 7);
        for (int i = 0; i < remaining; i++)
        cout << "|    ";
        cout << "|" << endl;
        cout << " ----------------------------------" << endl;
    }
}

int main()
{
    draw_calendar(2, 2304);
}
