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
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of an int: %u bytes(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long int));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
