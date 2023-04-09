#include "main.h"

/**
<<<<<<< HEAD
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
=======
 * _isdigit -  a function that checks for a digit 0-9
 * @c: input
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
<<<<<<< HEAD
	return (c >= '0' && c <= '9');
=======
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
}
