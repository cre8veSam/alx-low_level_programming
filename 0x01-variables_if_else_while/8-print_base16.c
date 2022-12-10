#include <stdio.h>

/**
 * main- Print alphabet in lower case and also uppercase followed by new line
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	char ch;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
