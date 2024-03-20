#include<stdio.h>

int main()
{
    float BS, HRA, DA, GS;
    printf("Enter the Basic salary of the employee\n");
    scanf("%f", &BS);

    if (BS < 1500)
    {
        HRA = BS * 0.1;
        DA = DA * 0.9;
    }

        else
        {
            HRA = 500;
            DA = 0.98 * BS;
        }

    GS = BS + HRA + DA;
    printf("The Gross salary of the employee is Rs.%f", GS);

    return 0;
}