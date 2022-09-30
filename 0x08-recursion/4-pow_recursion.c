#include "main.h"

/**
<<<<<<< HEAD
 * _pow_recursion - pow recursion
 * @x: integer params
 * @y: integer paramtr
 * Return: recursion
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
=======
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base.
 * @y: exponent.
 * Return: value of the exponentiation.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	else
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
	return (x * _pow_recursion(x, y - 1));
}
