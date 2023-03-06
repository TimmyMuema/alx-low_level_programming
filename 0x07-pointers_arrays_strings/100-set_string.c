#include "main.h"

/**

set_string - Sets the value of a pointer to a char.
Description: Sets the value of a pointer to a char to a new value.
@s: Pointer to a pointer to a char.
@to: Pointer to a char with the new value.
Return: Void.
*/
void set_string(char **s, char *to)
{
*s = to;
}
