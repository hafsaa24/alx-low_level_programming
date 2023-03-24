#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 *
 * @c: character to be checked
 *
 * Return: 1 for digits or 0 for anything else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
