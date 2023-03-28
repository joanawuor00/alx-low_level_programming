#include "main.h"
/**
 * print_rev - function that prints string in reverse
 * @s: the string reference pointer
 * Return: 0 (Always)
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev])
		rev++;
	while (rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
