#include <stdio.h>
int address(int x);

int main()
{
    int a;
    int *b = &a;
    printf("The address of the variable a is %u\n", b);
    printf("The address of the variable a is %u\n", address(a));
    return 0;
}
int address(int x)
{
    int *y;
    y = &x;
    printf("The address of variable x is %u\n", &x);
    return (y);
}