#include<stdio.h>

/**
 * main - Entry point
 *
 * description: Print Alphabet
 *
 * Return: 0 (success)
*/

int main(void)
{
	char first = 'a';

	while (first <= 'z')
	{
		putchar(first);
		first++;
	}

	putchar('\n');
	return (0);
}
