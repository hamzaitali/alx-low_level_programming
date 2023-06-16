#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the entry point to the program
 *
 * Description: generete arandom number and show if positife or negative
 * Return: 0 (suceed)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	return (0);
}