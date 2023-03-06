#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * Description: Fills the first n bytes of the memory area pointed to by s
 *              with the constant byte b.
 *
 * @s: Pointer to the memory area
 * @b: The constant byte to fill the memory with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

