#include "variadic_functions.h"
/**
 * print_all - printing all things using variadic function.
 * @format: list of arguments to be passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, k = 0;
	char *p;
	const char arr[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (arr[j])
		{
			if (format[i] == arr[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), k = 1;
			break;
		case 's':
			p = va_arg(args, char *), k = 1;
			if (!p)
			{
				printf("(nil)");
				break;
			}
			printf("%s", p);
			break;
		} i++;
	}
	 va_end(args),	printf("\n");
}
