#include "main.h"

/**
 * largest_prime_factor - finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: void
 */

void largest_prime_factor(void)
{
        long int num = 612852475143, i;

        for (i = 2; i <= num; i++)
        {
                if (num % i == 0)
                {
                        while (num % i == 0)
                        {
                                num /= i;
                        }
                        if (num == 1 || num == i)
                        {
                                printf("%ld\n", i);
                                break;
                        }
                }
        }
}

