#include <stdio.h>

int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);

    /*for (i; i; i--)
    {
        if (i==3)
        break;
        printf("The value of i is %d\n", i);
    }*/

    do
    {
        if (i == 3)
            continue;
        printf("The value of i is %d\n", i);
        i--;
    } while (i);

    return 0;
}