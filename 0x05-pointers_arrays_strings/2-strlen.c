#include "main.h"
/**
 * _strlen - gets the length of string
 * @s - the variable to get the string
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
