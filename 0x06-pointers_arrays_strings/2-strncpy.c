<<<<<<< HEAD
/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/
=======
#include "main.h"

/**
 * _strncpy -  function that copies a string..
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: void
 */
>>>>>>> f87307b742cf8ef0ef8c6379ac4d7243222e6929

char *_strncpy(char *dest, char *src, int n)
{
	int i;

<<<<<<< HEAD
	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	*/
=======
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

>>>>>>> f87307b742cf8ef0ef8c6379ac4d7243222e6929
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
