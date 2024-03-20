// CONTINUOUS ALLOCATION calloc()  [initializes with 0] 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }*/

    // WAP TO ALLOCATE MEMORY OF SIZE N WHERE N IS ENTERED BY THE USER//🤔🤔🤔🤔
    /*int n;
    printf("Enter the value of N :");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // free() WE USE IT TO FREE MEMORY THAT IS ALLOCATED USING MALLOC & CALLOC
    // X                                                             //🤔🤔🤔🤔
    free(ptr);
    ptr = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ptr[i]);
    }*/

    // realloc() REALLOCATION (INCREASE OR DECREASE) MEMORY USING THE SAME POINTER & SIZE
    // X                                                             //🤔🤔🤔🤔
    // ALLOCATE MEMORY FOR 5 NUMBERS,THEN DYNAMICALLY INCREASE IT TO 8 NUMBERS
    /*int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    printf("Enter the 5 Numbers :\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }*/

    // CREATE AN ARRAY OF OF SIZE 5(USING CALLOC) & ENTERS IT VALUES BY THE USER
    // X                                                             /🤔🤔🤔🤔
    /*int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("Enter 5 Numbers\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("NUMBERS = %d\n", ptr[i]);
    }*/

    return 0;
}