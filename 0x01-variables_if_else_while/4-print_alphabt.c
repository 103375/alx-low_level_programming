#include <stdio.h.>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always success
 */
int main(void)

{
char low;

for (low = 'a'; low <= 'z'; low++)
{
	if (low == 'q')
		continue;

	else if (low == 'e')
		continue;

	putchar(low);
}
putchar ("\n");

return (0);
}
