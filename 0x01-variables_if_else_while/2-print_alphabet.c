#include<stdio.h>
/**
 * main - entry program point
 *
 * Description: this program show the alphabet in lowercase using putchar
 *
 * Return: Always 0
 **/

int main(void)
{
	char c;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
