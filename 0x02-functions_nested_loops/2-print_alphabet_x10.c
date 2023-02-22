#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: return 0
 */
void print_alphabet_x10(void)
{
	char we;
	int i;

	while (i < 10)
	{
		we = "a";
		while (we <= "z")
		{
			_putchar(we);
			we++;
		}
		_putchar("\n");
		i++
	}
}
