#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c == 'q' || c == 'e') != 1)
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
