// print a number from 1 10 to 20 when a is initialzed to zero
#include <stdio.h>

int main()
{
    int a = 0;
    // printf("Enter the value of a\n");
    // scanf("%d",&a);

    /*while (a <= 20)
    {
        if (a >= 10)
        {
            printf("%d\n", a);
        }
        //a++;
        a = a + 1;
    }*/

    do
    {
        if (a >= 10)
        {
            printf("%d\n", a);
        }
        a++;
    } while (a <= 20);

    return 0;
}