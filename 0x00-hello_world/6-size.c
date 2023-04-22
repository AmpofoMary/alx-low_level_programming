#include <stdio.h>


/**
 * main - the entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a int long: %li byte(s)\n", sizeof(long));
	printf("Size of a long long: %li byte(s)\n", sizeof(long long));
	return (0);
}
