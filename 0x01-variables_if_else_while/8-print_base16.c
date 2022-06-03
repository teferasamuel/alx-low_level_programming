#include <stdio.h>
/**
 * main - Entry point
 * Return:end of function
 */
int main(void)
{
	char num;

	for (num = '0' ; num <= '9' ; num++)
		putchar(num);

	for (num = 'a' ; num <= 'f' ; num++)
		putchar(num);
	putchar(num);
	return (0);
}

