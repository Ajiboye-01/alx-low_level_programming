#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - Entry point
 *
 * Return: returns 0 if success
 */
void print_alphabet(void)
{
	char alp;

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;
	}
	_putchar ('\n');
}
