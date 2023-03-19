#include <stdio.h>

/**
 * main - print numbers separated by commas
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
