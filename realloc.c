// realloc() REALLOCATION (INCREASE OR DECREASE) MEMORY USING THE SAME POINTER & SIZE

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // X                                                             //🤔🤔🤔🤔
    // ALLOCATE MEMORY FOR 5 NUMBERS,THEN DYNAMICALLY INCREASE IT TO 8 NUMBERS
    /*int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    printf("Enter the 5 Numbers :\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("Enter the 8 Numbers :\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("NUMBER IS  %d\n", ptr[i]);
    }*/
    return 0;
}