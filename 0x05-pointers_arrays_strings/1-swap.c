#include "main.h"

/**
* swap_int - swaps the values of the two integers.
* @a: input integer one.
* @b: input integer two.
* Return: no return.
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
