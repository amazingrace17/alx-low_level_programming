#include "main.h"

/**
 * sawp_int -swap the value  of two integers
 *
 * @a:1st integer
 * @b:second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*b = *b;
	*b = temp;
}
