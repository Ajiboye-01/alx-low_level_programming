#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: number to check
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= "a" && c <= "Z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
