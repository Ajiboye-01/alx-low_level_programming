#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: returns 0 if success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
