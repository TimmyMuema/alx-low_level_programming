#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 *
 * Description: Copies n bytes from the memory area pointed to by src to the
 * memory area pointed to by dest.
 *
 * @dest: Pointer to destination memory area
 * @src: Pointer to source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

