#include "main.h"

/**
 * _strlen_recursion - Returns the length of the string
 * @s: The string whose length is returned
 * Return: An integer length of @s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
