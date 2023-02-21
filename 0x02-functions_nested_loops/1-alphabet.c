#include "main.h"
void print_alphabet(void)
{
	char d = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(d + i);
	}
	_putchar('\n');
}
