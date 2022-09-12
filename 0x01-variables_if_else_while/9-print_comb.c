#include <stdio.h>
/**
 * main - entry point into program
 *
 * Return: 0 Always (sucess)
 *
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
