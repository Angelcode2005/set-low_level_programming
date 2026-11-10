#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - prints remaining days in the year
* @month: month in number format
* @day: day of year
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int leap;

	leap = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));

	if (month < 1 || month > 12)
	{
		printf("Invalid date\n");
		return;
	}

	if (month == 2 && day == 60 && !leap)
	{
		printf("Invalid date: %02d/29/%04d\n", month, year);
		return;
	}

	if (leap && month > 2)
	{
		day++;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", (leap ? 366 : 365) - day);
}
