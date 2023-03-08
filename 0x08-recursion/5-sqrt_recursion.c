#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of the number, -1 if no natural square root
 * is found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - finds the natural square root of a number using binary search
 * @n: the number to calculate the square root of
 * @start: the starting point of the search
 * @end: the ending point of the search
 *
 * Return: the natural square root of the number, -1 if no natural square root
 * is found
 */

int find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);
	else if (start == end)
		return (-1);
	else if (mid * mid > n)
		return (find_sqrt(n, start, mid - 1));
	else
		return (find_sqrt(n, mid + 1, end));
}

