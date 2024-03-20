#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, absolute;
    printf("Enter any number x\n");
    scanf("%d", &x);

    absolute = abs(x);

    printf("The absolute value of the given number is %d", absolute);

    return 0;
}