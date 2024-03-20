// FACTORIAL OF A GIVEN NUMBER USING FOR LOOP

#include <stdio.h>

int main()
{
    int i, j, fact = 1;
    printf("Enter the value of J\n");
    scanf("%d", &j);

    for (i = j; i; i--)
    {
        fact = fact * i;
    }
    printf("The factorial of given number is %d", fact);
    return 0;
}