// PRINT ASCI VALUE FROM 0 TO 255 AND THEIR EQUIVALENT CHARACTER
#include <stdio.h>

int main()
{

    int i = 0;
    while (i <= 255)
    {
        printf("The ASCI value  %c is %d\n", i, i);
        i++;
    }

    return 0;
}