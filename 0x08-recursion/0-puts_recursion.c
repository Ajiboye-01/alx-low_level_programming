#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf('\n');
		return;
	}
	printf("%s", *s);
	printf(s + 1);
}
