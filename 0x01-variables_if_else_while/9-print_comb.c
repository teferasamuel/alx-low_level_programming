#include <stdio.h>
/**
 * main - Entry point
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
	putchar('\n');
	return (0);
}
