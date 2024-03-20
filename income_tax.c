#include <stdio.h>

int main()
{
    float tax, income, income_tax;

    printf("Enter the value of Income of an Employee in Lakh\n");
    scanf("%f", &income);
    if (income > 2.5 && income < 5.0)
    {
        tax = 5;
    }
    else if (income > 5.0 && income < 10.0)
    {
        tax = 20;
    }
    else if (income > 10.0)
    {
        tax = 30;
    }
    else
        tax = 0;

    income_tax = income * (tax / 100);
    printf("The income Tax paid by the Employee is %f\n", income_tax);

    return 0;
}