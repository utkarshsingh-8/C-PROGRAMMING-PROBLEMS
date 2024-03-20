// print multiplication table of 10 in reverse order

#include <stdio.h>

int main()
{
    int n = 10, i, j;
    printf("Enter the value of j\n");
    scanf("%d", &j);

    for (i = j; i; i--)
    {
        printf("The Multiplication table for  %d is %d\n", n, n * i);
    }

    return 0;
}