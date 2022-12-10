#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 (success)
 */
int main(void)
{
	int n, m, p;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 57; m++)
		{
			for (p = 50; p <= 57; p++)
			{
				if (p > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (n < 55 || m < 56 || p < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
