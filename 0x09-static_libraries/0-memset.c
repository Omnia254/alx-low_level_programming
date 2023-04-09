#include "main.h"
<<<<<<< HEAD

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
=======
/**
 * _memset - function that fills memory with a constant byte
 *@s: first value
 *@b: second value
 *@n: thirth value
 *
 * Return: char with result of memset
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
<<<<<<< HEAD

=======
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
	return (s);
}
