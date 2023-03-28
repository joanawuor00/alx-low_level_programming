#include "main.h"
/**
 * swap_int- swaps two integers
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0 (Always)
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *b;

	*b = *a;
	swap = *b;
}
