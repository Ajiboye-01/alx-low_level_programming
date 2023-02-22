#include "main.h"
/**
 * print_alphabet_x10(void) - Entry point
 *
 * Return: return 0
 */
void print_alphabet_x10(void)
{
	char we;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (we = "a"; we <= "z"; we++)
		_putchar(we);
	}
	_putchar("\n");
}
