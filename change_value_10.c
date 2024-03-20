#include <stdio.h>
int change(int *x);

int main()
{
    int a = 10;
    printf("The value of a after change is %d\n", change(&a));

    return 0;
}

int change(int *x)
{
    int y = 5;
    x = &y;
}