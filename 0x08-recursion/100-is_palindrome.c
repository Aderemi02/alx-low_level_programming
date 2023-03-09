#include "main.h"
/**
 * _strlen_rec - finds the length of the string
 * @s: string to check
 * Return: length of string
 */

int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_rec(s + 1));
}

/**
 * com_str - used to compare strings
 * @s: string to check
 * @n1: incremental integer for first comp
 * @n2: incremental integer for second comp
 * Return: value of compared string
 */

int com_str(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + com_str(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 0 if correct
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (com_str(s, 0, _strlen_rec(s) - 1));
}

