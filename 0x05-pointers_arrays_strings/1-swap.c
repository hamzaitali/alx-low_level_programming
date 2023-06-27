#include "main.h"

/**
 * swap-int - swap int variables
 *
 * Description: this switch variables values
 * @a: first number
 * @b: second number
 * @c: holder variable
 * Return: Always 0
 **/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
