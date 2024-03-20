#include <stdio.h>
#define PI 3.14

int main()
{
    int r, h;
    float area;
    printf("Enter the value of radius and height\n");
    scanf("%d %d", &r, &h);
    area = PI * r * r;
    printf("The area of circle is : %f\n", area);
    printf("The area of cylinder is :%f", area * h);
    printf(" ");
    return 0;

}