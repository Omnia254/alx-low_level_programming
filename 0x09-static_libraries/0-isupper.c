#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - checks for uppercase character
 * @c: the character to be checked
=======
 * _isupper - a function that checks for uppercase character
 * @c: input
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
<<<<<<< HEAD
	return (c >= 'A' && c <= 'Z');
=======
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
}
