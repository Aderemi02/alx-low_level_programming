#include <stdlib.h>
#include <time.h>
/**
 * main - blocks of codes
 * Return: 0 is awlays success
 */
int main(void)
{
	int n, c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;
	if (c > 5)
		printf("last digit of %d is %d and is greater than 5", n, c);
	
	else if (c < 6 && !=0)
		printf("last digit of %d is %d and is less than 6 and not 0", n, c);
	
	else 
		printf("last digit of %d is %d ans is 0", n, c);

	return (0);