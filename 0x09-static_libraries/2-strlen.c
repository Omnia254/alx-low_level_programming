#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
=======
 * _strlen - give the length of a string
 * @s: the string
 *
 * Return: the length of a string
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
 */
int _strlen(char *s)
{
	int i;

<<<<<<< HEAD
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

=======
	for (i = 0 ; s[i] != '\0' ; i++)
		;
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
	return (i);
}
