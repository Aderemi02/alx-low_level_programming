#include "main.h"
/**
 * _isdigit - writes the parameter c to stdout
 * @c: is the int to be checked
 * Return: 1 if int is a digit, otherwise 0.
 */

int _isdigit(int c)
{
	return ((c >= 48) && (c <= 57));
}
