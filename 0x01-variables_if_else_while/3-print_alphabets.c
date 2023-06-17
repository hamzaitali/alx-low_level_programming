#include<stdio.h>
/**
 * main - entry point
 *
 * Description: show alphabet in lowercase followed by uppercase and a $
 *
 * Return: Always 0
 **/
int main(void)
{
	char a1 = 'a';
	char a2 = 'A';

	while (a1 <= 'z')
	{
		putchar(a1);
		a1++;
	}
	while (a2 <= 'Z')
	{
		putchar(a2);
		a2++;
	}
	putchar('\n');
	return (0);
}
