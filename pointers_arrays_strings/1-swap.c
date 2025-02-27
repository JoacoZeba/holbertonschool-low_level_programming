#include "main.h"
/**
 * swap_int - swaps the value of two ints
 * @a and @b: ints to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
