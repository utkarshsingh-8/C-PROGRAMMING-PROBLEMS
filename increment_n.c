#include <stdio.h>

int main()
{
    int i = 0, a;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    while (i <= a)
    {
        printf("the value of i is %d\n", i);
        i++;
    }

    return 0;
}