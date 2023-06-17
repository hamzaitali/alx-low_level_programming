#include<stdio.h>
/**
 * main - entry point
 *
 * Description: printsingle digit
 *
 * Return: Always 0
 **/
int main(void)
{
	int n = 0;

	printf("%d", n);

	for (n = 1; n < 10; n += 2)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

