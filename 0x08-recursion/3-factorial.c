#include "main.h"

/**
<<<<<<< HEAD
 * factorial - factorial n
 * @n: integer arams
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
=======
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0)
	return (1);
	else
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
	return (n * factorial(n - 1));
}
