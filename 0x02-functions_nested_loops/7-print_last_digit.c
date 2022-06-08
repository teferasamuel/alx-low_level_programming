#include "main.h"
/**
 * print_last_digit - prints the last digit of a given number
 *  @n: input number as an integer.
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int y;

	y = n % 10;
	if (y < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
}
