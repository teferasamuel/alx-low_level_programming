#include <stdio.h>
/**
 * main - Entry point
 * Return: Always ends a function
 * ' '- Used for characters
 */
int main(void)
{
	char A;

	for (A = 'a' ; A <= 'z' ; A++)
	{
		putchar(A);
	}
	for (A = 'A' ; A <= 'Z' ; A++)
	{
	putchar(A);
	}
putchar('\n');
return (0);
}
