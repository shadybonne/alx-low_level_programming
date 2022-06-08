#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * main - uses built in function
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
