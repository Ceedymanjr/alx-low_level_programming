#include"main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
*
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	convert_day(int month, int day);
	print_remaining_days(int month, int day, int year);

	return (0);
}
