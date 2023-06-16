#include<stdio.h>
/**
 * main - his program printf a sentence
 *
 * Description: can be print using printf
 *
 * Return: 0 (suceed)
 **/
int main(void)
{
printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %d bytes(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}

