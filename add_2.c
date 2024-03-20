#include <stdio.h>
int add(int x,int y);

int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("The addition of a and b is %d", add(a, b));
    return 0;
}

int add(int x, int y)
    {
        int sum;
        sum = x + y;
        return sum;
    }