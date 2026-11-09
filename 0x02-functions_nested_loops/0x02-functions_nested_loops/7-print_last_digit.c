#include "main.h"

/**
 * print_last_digit - prints and returns the last digit
 * @n: number to check
 * Return: last digit
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
		digit = -digit;
	_putchar(digit + '0');
	return (digit);
}
