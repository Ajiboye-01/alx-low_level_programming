#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	char ra;

	for (ra = "a"; ra <= "z"; ra++)
	putchar(ra);
	putchar("\n");

	for (ra = "A"; ra <= "Z"; ra++)
	putchar(ra);
	putchar("\n");

	return (0);
}
