#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_args - counts the number of arguments passed into the program
 * @argc: arg count
 * Return: count of arguments
 */
int count_args(int argc)
{
    return (argc - 1);
}

/**
 * main - prints the number of arguments passed into the program
 * @argc: arg count
 * @argv: args passed as an array of strs
 * Return: 0;
 */
int main(int argc, char *argv[])
{
    int count;

    count = count_args(argc);

    printf("%d\n", count);

    return (0);
}

