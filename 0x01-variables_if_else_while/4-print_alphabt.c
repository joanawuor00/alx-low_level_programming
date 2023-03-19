#include <stdio.h>
/**
 * main - a progarm that prints lowercase letters
 *
 * Return: 0 (Always)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != q && i != e)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
