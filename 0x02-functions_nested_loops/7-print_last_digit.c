#include "main.h"


/**
 * print_last_digit - prints the last digit of an integer.
 * @n: the number to compute last digit.
 * Return: value of the last digit.
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = -1;
	}
	_putchar(ld + '0');
	return (ld);
}
