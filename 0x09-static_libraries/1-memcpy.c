#include "main.h"
<<<<<<< HEAD

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
=======
/**
 * _memcpy - function that copies memory area
 *@dest: the address of memory to print
 *@src: second value
 *@n: thirth value
 *
 * Return: char with result of memset
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
<<<<<<< HEAD

=======
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
	return (dest);
}
