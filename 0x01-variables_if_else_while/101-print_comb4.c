#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0 ; hundreds <= 7  ; hundreds++)
	{
		for (tens = hundreds + 1 ; tens <= 8 ; tens++)
		{
			for (ones = tens + 1 ; ones <= 9 ; ones++)
			{
				if (hundreds == 7 && tens == 8 && ones == 9)
				{
					putchar(hundreds + '0');
					putchar(tens + '0');
					putchar(ones + '0');
				}
				else
				{
					putchar(hundreds + '0');
					putchar(tens + '0');
					putchar(ones + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
