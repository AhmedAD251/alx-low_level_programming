#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets ( lower and uppercase )
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char f = 'a';
	char F = 'A';


	while (f <= 'z')
{
	putchar(f);
	f++;
}

	while (F <= 'Z')
{
	putchar(F);
	F++;
	}
	putchar('\n');

	return (0);
}
