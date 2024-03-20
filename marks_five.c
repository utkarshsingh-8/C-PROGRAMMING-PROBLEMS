#include <stdio.h>

int main()
{
    int marks[5];

    printf("Enter the marks of Student A:");
    scanf("%d", &marks[0]);
    printf("Enter the marks of Student B:");
    scanf("%d", &marks[1]);
    printf("Enter the marks of Student C:");
    scanf("%d", &marks[2]);
    printf("Enter the marks of Student D:");
    scanf("%d", &marks[3]);
    printf("Enter the marks of Student E:");
    scanf("%d", &marks[4]);

    printf("You have entered the marks of %d %d %d %d %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}