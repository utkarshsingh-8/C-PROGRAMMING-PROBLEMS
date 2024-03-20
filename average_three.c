#include <stdio.h>
float average(int x, int y, int z);

int main()
{
    int a, b, c;
    printf("Enter the value of a b and c\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("The average of three numbers is %f", average(a, b, c));

    return 0;
}
float average(int x, int y, int z)
{
    float avg;
    avg = (float)(x + y + z) / 3;
    return (avg);
}