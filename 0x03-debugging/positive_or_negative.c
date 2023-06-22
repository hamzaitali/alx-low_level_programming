#include "main.h"
/**
 * positive_or_negative - show if number is positive or negative
 * @n: the number tested
 * Description: generete arandom number and show if positife or negative
 * Return: 0 (suceed)
*/

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
