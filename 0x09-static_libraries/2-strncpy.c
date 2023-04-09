#include "main.h"
<<<<<<< HEAD

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
=======
/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

<<<<<<< HEAD
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

=======
	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
	return (dest);
}
