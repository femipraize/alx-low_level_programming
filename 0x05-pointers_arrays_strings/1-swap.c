#include "main.h"
/**
 * swap_int - swaps he value of int a and int b
 * @a: the first int pointer
 * @b: the second int pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
