#include "main.h"

/**
<<<<<<< HEAD
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
=======
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
 */

int _strlen_recursion(char *s)
{
<<<<<<< HEAD
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
=======
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
}
