#include <stdio.h>
#include "main.h"
/**
 *leapyr -this function checks whether a year is a leapyear.
 *@year: integer parameter year.
 *
 *Return:1 if leap year, 0 if not.
 */
int leapyr(int year)
{
return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int daysofmonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap = leapyr(year);

if (leap)
{
daysofmonth[2] = 29;
}
if ((month < 1 || month > 12 || day < 1 || day > daysofmonth[month]))
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

int dayofyr = 0
for (int i = 1; i < month; i++)
{
dayofyr += daysofmonth[i];
}

dayofyr += day;

if (leap && month > 2)
{
dayofyr++;
}

printf("Day of the year: %d\n", dayofyr);
printf("Remaining days:%d\n", leap ? (366 - dayofyr) : (365 - dayofyr));
}
