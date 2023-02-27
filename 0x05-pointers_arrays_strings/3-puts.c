#include "main.h"
/**
 * _puts - this print number
 *
 * @str: this is the letter
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
