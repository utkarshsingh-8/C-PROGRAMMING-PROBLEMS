#include <stdio.h>
int wrong_swap(int x, int y);

int main()
{
    int a = 3, b = 4;
    printf("The value of a and b before swap is %d %d\n", a, b);
    wrong_swap(a, b);
    printf("The value of a and b after swap is %d %d\n", a, b);
    return 0;
}

int wrong_swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
