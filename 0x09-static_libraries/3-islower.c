#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: checks input
 * Return: 1 if c is lowercase
 * otherwise return is 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);
}
