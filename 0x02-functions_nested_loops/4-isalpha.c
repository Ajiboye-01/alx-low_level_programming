#include "main.h"
/**
 * _isalpha: Entry point
 * Return: always 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
