#include <stdio.h>
int right_swap(int *x, int *y);

int main()
{
    int a, b;
    printf("Enter the Value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("The value of a and b before swap is %d %d\n", a, b);
    right_swap(&a, &b);
    printf("The value of a and b after swap is %d %d\n", a, b);
    return 0;
}

int right_swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
