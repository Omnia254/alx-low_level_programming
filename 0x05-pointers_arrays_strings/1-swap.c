#include <main.h>

/**
 * swaps the values of two integers int a to int b 
 * @a first int to swap
 * @b seconed int to swap
 *
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
