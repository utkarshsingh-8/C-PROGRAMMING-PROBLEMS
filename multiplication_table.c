// multipication table for any natural numbers
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the value of n and j\n");
    scanf("%d %d", &n, &j);

    for (i = 0; i <= j; i++)
    {
        printf("The Multiplication table for  %d is %d\n", n, n * i);
    }

    return 0;
}