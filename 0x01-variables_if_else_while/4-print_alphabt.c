#include<stdio.h>
/**
 * main - entry point
 *
 * Description: print alphabet without q and e using putchar only
 *
 * Return: Always 0
 **/
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if ((a == 'q') || (a == 'e'))
			continue;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
