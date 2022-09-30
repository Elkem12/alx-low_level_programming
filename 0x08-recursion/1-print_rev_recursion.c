#include "main.h"

/**
<<<<<<< HEAD
 * _print_rev_recursion - reverse
 * @s: pointer to string params
 *
=======
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: no return.
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
 */

void _print_rev_recursion(char *s)
{
<<<<<<< HEAD
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
=======
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
	}
}
