#include <stdio.h>

int main()
{
    int side1, side2, side3, longside;
    printf("Enter the three sides of Triangle\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is Equilateral Triangle\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("The Triangle is Isosceles Triangle\n");
    }

    if (side1 > side2 && side1 > side3)
        longside = side1;
    if (side2 > side1 && side2 > side3)
        longside = side2;
    if (side3 > side2 && side3 > side1)
        longside = side3;

    printf("longside is %d\n", longside);

    if ((side1 * side1 == side2 * side2 + side3 * side3) || (side2 * side2 == side1 * side1 + side3 * side3) || (side3 * side3 == side1 * side1 + side2 * side2))
    {
        printf("The Triangle is right-angled Triangle\n");
    }

    return 0;
}