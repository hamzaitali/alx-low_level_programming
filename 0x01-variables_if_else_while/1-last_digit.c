#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Description: ' number if is not 0 greater than 5 and less than 6'
 *
 * Return: Always 0 (suceed)
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	printf("Last digit of %d ", n);
	if (n > 5)
		printf("and is greater than 5");
	else if (n == 0)
		printf("and is zero 0");
	else if (n < 6 && n != 0)
		printf("and is less than 6 and not 0");
	return (0);
}
