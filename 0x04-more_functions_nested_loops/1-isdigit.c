#include "main.h"

/**
 * _isdigit - check num if digit from 0 to 9
 *
 * @c: num input
 *
 * Return: 1 if from 0 to 9, otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
