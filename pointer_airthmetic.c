#include <stdio.h>

int main()
{
    // int a = 50;
    // int *ptr = &a;

    // printf("The value of ptr is %d\n", ptr);
    // ptr--;
    // ptr = ptr + 1;
    // printf("The value of ptr is %d\n", ptr);

    char a = 50;
    char *ptr = &a;

    printf("The value of ptr is %d\n", ptr);
    // ptr--;
    ptr = ptr + 1;
    printf("The value of ptr is %d\n", ptr);

    return 0;
}