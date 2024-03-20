//check whether a year is leap or not
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);

     if ((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0))
        printf("The year is leap year");
    else
        printf("The year is not leap year");
    /*if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("Leap year\n");
        else
            printf("Not a leap year\n");
    }
    else
    {
        if (year % 4 == 0)
            printf("Leap year\n");
        else
            printf("Not a leap year\n");
    }*/

    return 0;
}