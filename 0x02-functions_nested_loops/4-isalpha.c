#include "main.h"
/**
 * _isalpha - function to check if c ia a letter, lower case or uppercase
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
