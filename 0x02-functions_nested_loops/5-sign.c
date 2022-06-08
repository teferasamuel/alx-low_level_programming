#include "main.h"
/**
 * print_sign - To determine wether the input is positive
 * negative or zero
 * @n : input number as integer
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n);
{
	char x = "+";
	char y = "0";
	char z = "-";

	if (n > 0)
	{
		_putchar(x);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(z);
		return (-1);
	}
	else
	{
		_putchar(y);
		return (0);
	}
	_putchar('\n');
}
