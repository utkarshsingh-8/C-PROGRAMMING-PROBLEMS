#include <stdio.h>
float force(int mass);

int main()
{
    float m;
    printf("Enter the value of Mass of the body in kg\n");
    scanf("%f", &m);

    printf("Force of Attraction exerted by earth :%f", force(m));
    return 0;
}

float force(int mass)
{
    float attraction;
    attraction = mass * 9.8;
    return (attraction);
}