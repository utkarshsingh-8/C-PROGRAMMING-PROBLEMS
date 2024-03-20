#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter the value of x(in degree)\n");
    scanf("%f", &x);

    y = (sin(x) * sin(x)) + (cos(x) * cos(x));
    printf("The value of Y is %f", y);

    return 0;
}