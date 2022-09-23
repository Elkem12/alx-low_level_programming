#include "main.h"

/**
<<<<<<< HEAD
 * base10 - change the integer to base 10
 * @n: integer
 * Return: base
=======
 * base10 - power in 10 base
 * @n: an exponent
 * Return: returns 10 to power exponent
>>>>>>> f87307b742cf8ef0ef8c6379ac4d7243222e6929
 */
int base10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}
<<<<<<< HEAD
/**
 * print_number - prints an integer to the screen
 * @n: Integer to be printed to the screen
 *
=======

/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
>>>>>>> f87307b742cf8ef0ef8c6379ac4d7243222e6929
 * Return: void
 */
void print_number(int n)
{
	int power;

	power = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');
<<<<<<< HEAD
	else
	{
		while (n / power == 0)
		{
			power /= 10;
		}
=======

	else
	{
		while (n / power == 0)
			power /= 10;

>>>>>>> f87307b742cf8ef0ef8c6379ac4d7243222e6929
		while (power >= 1)
		{
			_putchar((n / power) + '0');
			n %= power;
			power /= 10;
		}
	}
}
