#include <stdio.h>

int main()
{
    int side1, side2, side3, largeside, sum;
    printf("Enter the length of side1,side2,side3\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 > side2)
    {
        if (side1 > side3)
        {
            sum = side2 + side3;
            largeside = side1;
        }
    }

    if (side2 > side1)
    {
        if (side2 > side3)
        {
            sum = side1 + side3;
            largeside = side2;
        }
    }

    if (side3 > side2)
    {
        if (side3 > side1)
        {
            sum = side2 + side1;
            largeside = side3;
        }
    }

    if (sum > largeside)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }

    return 0;
}