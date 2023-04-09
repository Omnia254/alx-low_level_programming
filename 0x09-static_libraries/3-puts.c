#include "main.h"

/**
<<<<<<< HEAD
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
=======
 * _puts - Prints a string .
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

>>>>>>> cef871e5dde5405ee2826371231783d78fc3313b
	_putchar('\n');
}
