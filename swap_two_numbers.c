// SWAP TWO NUMBERS WITH AND WITHOUT USING THIRD VARIABLe

#include <stdio.h>

int main()
{
    // SWAP USING THIRD VARIABLE
    int a = 3, b = 4, c;
    printf("The value of A and B before swap is %d %d\n", a, b);
    /* c = b;
     b = a;
     a = c;
    printf("The value of A and B after swap is %d %d\n",a,b);*/

    // SWAP WITHOUT USING THIRD VARIABLE
    b = b - a;
    a = a + b;
    b = a - b;

    printf("The value of A and B after swap is %d %d\n", a, b);
}