#include <main.h>

/**
 * main - Write a program that prints _putchar
 *
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
