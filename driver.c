#include <stdio.h>

int main()
{
    char sex, martial_status;
    int age;

    printf("Enter the sex and martial status of the driver\n");
    scanf("%c %c", &sex, &martial_status);

    printf("Enter the age of the driver\n");
    scanf("%d", &age);

    if ((martial_status == 'M') || (martial_status == 'U' && sex == 'M' && age > 30) || (martial_status == 'U' && sex == 'F' && age > 25))
    {
        printf("Driver is insured\n");
    }
    else
    {
        printf("Driver is not insured\n");
    }

    return 0;
}