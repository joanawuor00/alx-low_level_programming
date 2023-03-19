#include <stdio.h>
/**
 * main - program to print 0 to 9 using the putchar function
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
