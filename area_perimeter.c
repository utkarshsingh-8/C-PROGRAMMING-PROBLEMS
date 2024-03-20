#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;
    printf("Enter the length and breadth of a rectangle\n");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        printf("The area is greater than perimeter\n");
    }
    else
    {
        printf("The perimeter is greater than area");
    }

    return 0;
}