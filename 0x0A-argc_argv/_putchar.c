#include<stdio.h>
#include"main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 (success) -1 (error)
 */

int_putchar(char c)
{
	return(write(1, &c, 1));
}
