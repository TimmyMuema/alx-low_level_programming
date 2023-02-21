#include "main.h"

/* prints the lowercase alphabet, followed by a new line */
void print_alphabet(void);

int main(void)
{
        print_alphabet();
        return (0);
}

/* prints the lowercase alphabet, followed by a new line */
void print_alphabet(void)
{
        char c = 'a';

        while (c <= 'z')
        {
                _putchar(c);
                c++;
        }

        _putchar('\n');
}

