#include <stdio.h>
#include <math.h>

int main()
{
    float cx, cy, x, y, radius, distance;
    printf("Enter the coordinates of center:(cx,cy) and coordinates of point:(x,y) and radius of circle\n");
    scanf("%f %f %f %f %f", &cx, &cy, &x, &y, &radius);

    distance = sqrt((pow(x - cx, 2)) + (pow(y - cy, 2)));

    if (distance > radius)
    {
        printf("Point lies ouside the circle\n");
    }
    if (distance < radius)
    {
        printf("The point lies inside the circle\n");
    }
    if (distance == radius)
    {
        printf("The point lies on the circle\n");
    }

    return 0;
}