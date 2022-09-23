<<<<<<< HEAD
/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i, c = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values in array s*/
	while (s[c] != '\0')
	{
		/**
		 * loop through array value five times
		 * to check if the value is equal to
		 * any small letter in array sl or
		 * upper letter in array ul and if it
		 * is replace it with the value in array n
		*/
		for (i = 0; i < 5; i++)
		{
			if (s[c] == sl[i] || s[c] == ul[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
=======
#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: the enconde string.
 */
char *leet(char *s)
{
	int i;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = e[k];
			}
			j++;
		}
		i++;
>>>>>>> f87307b742cf8ef0ef8c6379ac4d7243222e6929
	}
	return (s);
}
