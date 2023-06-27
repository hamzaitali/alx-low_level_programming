#include "main.h"

/**
 * swap_int - swap int variables
 *
 * Description: this switch variables values
 *
 * @a: first number
 * @b: second number
 *
 * Return: Always 0
 **/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
