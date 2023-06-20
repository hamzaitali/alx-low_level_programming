#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Description: this c pgrogramme print alphabet in lower case
 * Return: Always 0
 **/
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
