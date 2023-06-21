#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 time
 *
 * Description: this c pgrogramme print alphabet in lower case 10 times
 *
 * Return: Always 0
 **/

void print_alphabet_x10(void)
{
	int j;
	char i;

	j = 1;

	while (j <= 10)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		j++;
		_putchar('\n');
	}
}
