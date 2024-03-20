// sum of numbers occuring in the multiplication of 8

#include <stdio.h>

int main()
{
    int n = 8, i = 1, j = 10, sum;

    for (i; i <= j; i++)
    {
        printf("The Multiplication table for  %d is %d\n", n, n * i);
        sum = sum + (n * i);
    }

    printf("The sum of multiple of 8 is %d", sum);
    return 0;
}