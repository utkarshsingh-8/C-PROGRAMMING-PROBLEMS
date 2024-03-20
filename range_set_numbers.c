#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, range, i, greatest, smallest;
    printf("Enter the Limit\n");
    scanf("%d", &num);
    printf("Enter the Numbers\n");

    smallest = greatest = num;

    while (num)
    {
        scanf("%d", &i);
        if (num > greatest)
        {
            greatest = num;
        }
        if (num < smallest)
        {
            smallest = num;
        }
        num--;
    }
    printf("Small numbers %d\n", smallest);
    printf("Large numbers %d\n", greatest);
    range = greatest - smallest;
    printf("Range of numbers is %d\n", abs(range));
    return 0;
}