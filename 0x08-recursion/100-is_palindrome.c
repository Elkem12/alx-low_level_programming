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
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolena
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
=======
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
	if (n1 == n2 || n1 == n2 + 1)
	return (1);
	return (0 + comparator(s, n1 + 1, n2 - 1));
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
	}
	return (0);
}

/**
<<<<<<< HEAD
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
=======
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
 */

int is_palindrome(char *s)
{
<<<<<<< HEAD
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
=======
	if (*s == '\0')
	return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
}
