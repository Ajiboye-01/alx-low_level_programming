#include "main.h"
#include <stdio.h>
/**
 * _isupper - this is the main function
 * @c: is the capital letter
 * Return: always 0
 * Desc: Header file containing declartions for all function
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
