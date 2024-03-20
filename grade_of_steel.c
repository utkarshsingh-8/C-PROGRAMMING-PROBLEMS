#include <stdio.h>

int main()

{
    int hardness, tensile_strength;
    float carbon_content;

    printf("Enter The value(>50) of hardness of Steel\n");
    scanf("%d", &hardness);
    printf("Enter The value(>5600) of Tensile-Strength of Steel\n");
    scanf("%d", &tensile_strength);
    printf("Enter The value(<0.7) of Carbon-Content of Steel\n");
    scanf("%f", &carbon_content);

    if (hardness > 50 && tensile_strength > 5600 && carbon_content < 0.7)
        printf("Grade is 10\n");
    else if (hardness > 50 && carbon_content < 0.7)
        printf("Grade is 9\n");
    else if (tensile_strength > 5600 && carbon_content < 0.7)
        printf("Grade is 8\n");
    else if (hardness > 50 && tensile_strength > 5600)
        printf("Grade is 7\n");
    else if (hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600)
        printf("Grade is 6\n");
    else
        printf("Grade is 5\n");

    return 0;
}