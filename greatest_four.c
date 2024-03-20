#include <stdio.h>

int main()
{
    int x, y, z, w, greatest;
    printf("Enter the value of x,y,z and w\n");
    scanf("%d %d %d %d", &x, &y, &z, &w);

    if (x > y && x > z && x > w)
        greatest = x;
    else if (y > x && y > z && y > w)
        greatest = y;
    else if (z > y && z > x && z > w)
        greatest = z;
    else if (w > y && w > z && w > x)
        greatest = w;

    printf("The Greatest among four is %d\n", greatest);

    return 0;
}