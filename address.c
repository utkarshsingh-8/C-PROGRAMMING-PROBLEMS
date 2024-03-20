//PRINT THE ADDRESS OF A VARIABLE AND USE THIS ADDRESS TO GET THE VALUE OF THE VARIABLE

#include <stdio.h>

int main()
{
    int a = 5;
    int *b = &a;
    printf("The address of the variable a is %u\n", &a);
    printf("The address of the variable a is %u\n", b);
    printf("The value of the variable is %d\n", *(&a));
    printf("The value of the variable is %d\n", *b);

    return 0;
}