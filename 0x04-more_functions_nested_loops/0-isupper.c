#include "main.h"

/**
 * _isupper - checks for lowercase character
 *
 * @c:The character to be checked
 *
 * Return: 1 for uppercase and 0 for everything else
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
