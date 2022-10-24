#include "main."
/**
 * swap_int - swaps he value of int a and int b
 * @a: the first int pointer
 * @b: the second int pointer
 * Return: alays return 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
