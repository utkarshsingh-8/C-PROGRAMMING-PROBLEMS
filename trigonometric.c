#include <stdio.h>
#include <math.h>

int main()
{
    float angle_d, angle_r;
    const float PI = 3.14159;

    printf("Enter the value of angle in degree\n");
    scanf("%f", &angle_d);

    angle_r = angle_d * (PI / 180.0);

    printf("sin(%f)=%f\n", angle_d, sin(angle_r));
    printf("cos(%f)=%f\n", angle_d, cos(angle_r));
    printf("tan(%f)=%f\n", angle_d, tan(angle_r));
    printf("sec(%f)=%f\n", angle_d, 1 / cos(angle_r));
    printf("cot(%f)=%f\n", angle_d, 1 / tan(angle_r));
    printf("cosec(%f)=%f\n", angle_d, 1 / sin(angle_r));

    return 0;
}