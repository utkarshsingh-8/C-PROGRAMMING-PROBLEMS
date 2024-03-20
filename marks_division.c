#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, total;
    float per;

    printf("Enter the marks of sub1,sub2,sub3,sub4,sub5\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    per = total / 5.0;

      if (per >= 60)
    {
        printf("First Devision");
    }
    if (per >= 50 && per < 59)
    {
        printf("Second Devision");
    }
    if (per >= 40 && per < 49)
    {
        printf("Third Devision");
    }
    if (per < 40)
    {
        printf("Fail");
    }

    // using else if ladder

    /*if (per >= 60)
        printf("First Devision\n");
    else if (per >= 50)
        printf("First Devision\n");
    else if (per >= 40)
        printf("First Devision\n");
    else
        printf("fail\n");*/

    return 0;
}