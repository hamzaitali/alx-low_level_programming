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
	int n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = n % 10;
	printf("Last digit of %d is %d ", n, n1);
	if (n1 > 5 && n1 != 0)
		printf("and is greater than 5\n");
	else if (n1 == 0)
		printf("and is 0");
	else if (n1 < 6 && n1 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
