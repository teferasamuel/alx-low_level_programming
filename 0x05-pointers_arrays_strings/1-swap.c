#include <stdio.h>
#include "main.h"
/**
 * swap_int - a function to swap the value of two integers
 * @a: integer value of num 1
 * @b: integer value of num 2
 * @c: integer
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
