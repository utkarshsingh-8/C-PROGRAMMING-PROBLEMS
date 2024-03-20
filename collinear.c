#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3, a;
    float slope1, slope2, slope3;
    printf("Enter the value of points:(x1,y1) (x2,y2) (x3,y3)\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    // slope1 = (y2 - y1) / x2 - x1;
    // slope2 = (y3 - y2) / x3 - x2;

    a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (a == 0)
    {
        printf("The three points are collinear");
    }
    else
    {
        printf("The three points are not collinear");
    }

    return 0;
}