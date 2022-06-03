#include <stdio.h>
/**
 * main - possible combination of numbers
 * return: ends the function
 */
int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
