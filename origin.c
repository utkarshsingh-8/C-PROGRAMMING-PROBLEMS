#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the coordinates : (x,y)\n");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The given point of coordinate lies on origin\n");
    }
    else if (x == 0)
    {
        printf("The point of coordinates lies on x-axis\n");
    }
    else if (y == 0)
    {
        printf("The point of coordinates lies on Y-axis\n");
    }

    return 0;
}