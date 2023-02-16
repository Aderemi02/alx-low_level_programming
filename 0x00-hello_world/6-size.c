#include <stdio.h>
/**
 * main - This is used to output the strings using printf
 * printf - this is a function used to output a string
 * Return: 0 is to the function main
 */
int main(void)


	{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
	}
