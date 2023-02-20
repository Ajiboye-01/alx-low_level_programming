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
	char ra = "a";

	while (ra <= "z")
	{
		putchar(ra);
		ra++;
	}
	ra = "A";

	while (ra <= 'Z')
	{
		putchar(ra);
		ra++;
	}
	putchar('\n');
	return (0);
}
