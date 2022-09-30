#include "main.h"

/**
<<<<<<< HEAD
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
=======
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
<<<<<<< HEAD
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
=======
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
}
