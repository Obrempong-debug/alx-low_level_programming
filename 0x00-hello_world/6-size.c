#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a chair: %lu byte(s)\n", (unisigned long)sizedof(d));
	printf("Size of an int: %lu byte(s)\n", (unisigned long)sizedof(a));
	printf("Size of a long: %lu byte(s)\n", (unisigned long)sizedof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unisigned long)sizedof(c));
	printf("Size of a float: %lu byte(s)\n", (unisigned long)sizedof(f));
	return (0);
}
