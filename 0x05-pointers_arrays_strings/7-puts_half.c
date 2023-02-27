#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, start;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}

	for (i = start; i < len; i++)
	{
		putchar(*(str + i));
	}

	putchar('\n');
}

