#include <stdio.h>
int sum_and_avg(int x, int y);

int main()
{
    int a, b, sum;
    float avg;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("The sum and averge of two numbers is %d %d", sum_and_avg(a, b, &sum, &avg));

    return 0;
}
int sum_and_avg(int x, int y, float *avg, int *sum)
{
    int sum;
    float avg;
    *sum = x + y;
    *avg = *sum / 2;
}