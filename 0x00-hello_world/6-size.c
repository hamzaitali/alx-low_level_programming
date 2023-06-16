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
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %d bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %d byte(s)", (unsigned long)sizeof(f));
return (0);
}

