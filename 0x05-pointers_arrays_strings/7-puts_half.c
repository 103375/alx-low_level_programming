#include "main.h"
#include <string.h>

/**
 * puts_half - a function that prints half of a string
 *
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
