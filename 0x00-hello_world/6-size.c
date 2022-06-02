#include <stdio.h>
/**
 * main - Entry point
 *
 * return: ends the function
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(a));
	printf("size of an int: %lu byte(s)\n", sizeof(b));
	printf("size of a long int: %lu byte(s)\n", sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
