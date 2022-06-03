#include <stdio.h>
/**
 * main - Entry point
 * Return: ends the function
 */
int main(void)
{
	char A;

	for (A = 'z' ; A >= 'a' ; A--)
		putchar(A);
	putchar('\n');
	return (0);
}
