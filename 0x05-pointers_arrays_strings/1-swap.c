#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *  @a: The first integer to be swapped.
 *  Return:Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
