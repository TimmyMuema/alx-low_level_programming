#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
    char c;
    int i, j;

    for (j = 0; j < 10; j++)
    {
        c = 'a';
        for (i = 0; i < 26; i++)
        {
            _putchar(c + i);
        }
    }
    _putchar('\n');
}

