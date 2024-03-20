#include <stdio.h>

int main()
{
    int a = 1, b, positive = 0, negative = 0, zero = 0;
    printf("Enter the limit\n");
    scanf("%d", &b);

    printf("Enter the %d Number\n", b);
    while (a <= b)
    {
        scanf("%d", &a);
        if (a > 0)
            positive++;
        else if (a < 0)
            negative++;
        else
            zero++;
        a++;
    }
    printf("Positive Numbers: %d\n", positive);
    printf("Negative Numbers: %d\n", negative);
    printf("Zero Numbers: %d\n", zero);

    return 0;
}