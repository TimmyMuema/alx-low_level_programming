#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
    long int num = 612852475143;
    long int i;

    /* Divide by 2 until it's no longer even. */
    while (num % 2 == 0)
    {
        num /= 2;
    }

    /* Check odd factors up to the square root of the remaining number. */
    for (i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            num /= i;
        }
    }

    /* If the remaining number is greater than 2, it must be a prime factor. */
    if (num > 2)
    {
        printf("%ld\n", num);
    }

    return (0);
}

