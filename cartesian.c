#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r, theta;
    printf("Enter the value of x and y\n");
    scanf("%f %f", &x, &y);

    //r=sqrt(x*x + y*y);
    r = sqrt(pow(x, 2) + pow(y, 2));
    theta = atan(y / x);
    printf("The value of r is %f\n", r);
    printf("The value of theta is %f\n", theta);

    return 0;
}