#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
       		_putchar(*s);
	}
}
