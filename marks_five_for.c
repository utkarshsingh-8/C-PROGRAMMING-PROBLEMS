#include <stdio.h>

int main()
{
    int marks[5], i;
    printf("Enter the marks of Five Students\n");

    for (i = 0; i < 5; i++)
    {
        printf("The marks of student %d\n", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("The marks we have entered is %d\n", marks[i]);
    }

    return 0;
}