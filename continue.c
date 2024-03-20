#include <stdio.h>

int main()
{
    int a = 0;
    int skip = 5;

    while (a < 10)
    {
        a++;
        if (a != skip)
            continue;
        else
            printf("%d", a);
    }

    return 0;
}