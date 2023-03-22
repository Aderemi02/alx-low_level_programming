#include "function_pointers.h"
/**
 * print_name - function passing a void function pointer
 * @name: the character to be passed to the function pointer
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
