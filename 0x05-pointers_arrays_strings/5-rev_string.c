#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	/* Move the end pointer to the end of the string */
	while (*end != '\0')
	{
		end++;
	}

	end--; /* Point to the last character before the null terminator */

	/* Swap the characters at the start and end pointers */
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

