#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	char ch = '5';

	if (_isdigit(ch))
	{
		printf("%c is a digit\n", ch);
	}
	else
	{
		printf("%c is not a digit\n", ch);
	}

	return (0);
}

