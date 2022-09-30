#include "main.h"

/**
<<<<<<< HEAD
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
=======
 * wildcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2. It can contains a * as a special character.
 * Return: 1 if are identical, 0 if not.
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
 */

int wildcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
=======
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	return (0);
	if (*s1 == '\0' && *s2 == '\0')
	return (1);
	if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
>>>>>>> fcc46ccc3e976f9751faae83574c7a48b28175dc
	return (0);
}
