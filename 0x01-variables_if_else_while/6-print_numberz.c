#include <stdio.h>

/**
* main - Prints the numbers from 0 to 9
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar(number + 48);

	putchar(10);

	return (0);
}
