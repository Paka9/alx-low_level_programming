#include <stdio.h>

/**
 * main - A program that prints out the size of the fuction
 * Return: 0
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int i;
	float f;
	printf ("Size of a char: %lu bytes(s)\n",(unsigned long)sizeof(x));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return: (0)
}

