#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet_x10();

	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n')
	}
}
