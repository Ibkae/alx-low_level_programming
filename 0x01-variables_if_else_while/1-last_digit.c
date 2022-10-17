#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Range of digits
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is %d", n, a);
	if (a > 5)
	{
		printf("and is greater than 5")
	}
	if (a == 0)
	{
		printf("and is 0")
	}

	return (0);

}
