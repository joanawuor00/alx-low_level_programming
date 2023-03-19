#include <stdio.h>
/**
 * main - program that prints alphabet in reverse
 *
 * Return: 0 (Always)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
