#include <stdio.h>

int main()
{
    int stud[4][2];
    int i, j;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; i <= 1; j++)
        {
            printf("Enter the roll no and marks\n");
            scanf("%d %d",&i,&stud[i][j]);
        }
    }
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; i <= 1; j++)
        {
            printf("The Roll no we have entered and marks\n", stud[i][j]);
        }
    }
 return 0;
}