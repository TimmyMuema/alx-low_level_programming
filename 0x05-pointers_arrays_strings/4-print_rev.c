#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse to stdout followed by a new line
 * @s: Pointer to the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* Print the string in reverse order */
	while (length > 0)
	{
		s--;
		putchar(*s);
		length--;
	}

	putchar('\n');
}

