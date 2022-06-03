#include <stdio.h>
/**
 * main - Entry point
 * Return: ends the function
 */
int main(void)
{
	char A;

	for (A = 'a'  ; A <= 'z' ; A++)
	{
		if (A != 'e' && A != 'q')
			putchar(A);
	}
	putchar('\n');
	return (0);
}
