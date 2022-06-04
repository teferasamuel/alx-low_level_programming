#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int hundreds;
	int tens;
	int zeros;

	for (hundreds = 0 ; hundreds <= 9 ; hundreds++)
	{
		for (tens = hundreds + 1 ; tens <= 9 ; tens++)
		{
			for (zeros = tens + 1 ; zeros <= 9 ; zeros++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(zeros + '0');
				if (hundreds < 7 && tens < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
