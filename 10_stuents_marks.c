#include <stdio.h>

int main()
{
    float avg;
    int sum = 0;
    int i;
    int marks[11];
    printf("Enter the value of marks\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 30.0;
    printf("Average marks=%f\n", avg);
    return 0;
}