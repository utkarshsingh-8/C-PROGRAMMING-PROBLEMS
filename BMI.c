#include <stdio.h>

int main()
{
    float weight_kg, height_m, BMI;
    printf("Enter the person weight(in kg) and height(in m)\n");
    scanf("%f %f", &weight_kg, &height_m);

    BMI = weight_kg / (height_m * height_m);

    if (BMI < 15)
        printf("Starvation\n");
    else if (BMI > 15.1 && BMI < 17.5)
        printf("Anorexic\n");
    else if (BMI > 17.6 && BMI < 18.5)
        printf("Underweight\n");
    else if (BMI > 18.6 && BMI < 24.9)
        printf("Ideal\n");
    else if (BMI > 25 && BMI < 25.9)
        printf("Overweight\n");
    else if (BMI > 30 && BMI < 30.9)
        printf("Obese\n");
    else if (BMI >= 40)
        printf("Morbidly Obese\n");

    return 0;
}