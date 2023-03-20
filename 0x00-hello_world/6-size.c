#include <stdio.h>
/**
 * main - a program that give the size 
 * Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("size of b int: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("size of c long: int %lu byte(s)\n",(unsigned long)sizeof(c));
printf("size of d long: long int %lu byte(s)\n",(unsigned long)sizeof(d));
printf("size of f float %lu byte(s)\n",(unsigned long)sizeof(f));
return (0)
}	
