#include "main.h"

/**
<<<<<<< HEAD
 * rot13 - encodes a string using the ROT13 system
 * @str: String to be encoded
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *lookup;

	lookup = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (lookup[j] != '\0')
		{
			if (str[i] == lookup[j])
			{
				int index;

				index = ((j + 13) % 26) + ((j / 26) * 26);
				str[i] = lookup[index];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
=======
 * rot13 -  a   function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
		i++;
	}
	return (s);
>>>>>>> f87307b742cf8ef0ef8c6379ac4d7243222e6929
}
