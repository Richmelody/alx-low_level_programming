#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	char num = '0';

	for (num = 0; num < 10; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
