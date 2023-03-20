#include <stdio.h>
/*
 * main - a program size
 * return 0 (success)
 */
int main(void)
        char a;
        int b;
        long int c;
        long long int d;
        float f;
{
        printf("Size of a char:%Lu byte(s)\n",(unsigned long)sizeof(a));
        printf("Size of an int:%Lu byte(s)\n",(unsigned long)sizeof(b));
        printf("Size of a long int:%Lu byte(s)\n",(unsigned long)sizeof(c));
        printf("Size of a long long int:%Lu byte(s)\n",(unsigned long)sizeof(d));
        printf("Size of a float:%Lu byte(s)\n",(unsigned long)sizeof(f));
        return (0);
}
