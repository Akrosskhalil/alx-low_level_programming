#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if positive or negative
 * return: always (success)
 */
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX;
	if (n>0)
	{
	printf("%d is positive\n",n)
	}
	else if (n==0)
	{
	printf("%d is zero\n",n);
	}
	else
	{
	printf(%d is negative\n",n);
	}
	return (0);
}

