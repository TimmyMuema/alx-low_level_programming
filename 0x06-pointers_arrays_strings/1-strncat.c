#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
	int dest_len = 0, i = 0;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add null terminator */
	dest[dest_len + i] = '\0';

	return (dest);
}

