#include <stdio.h>

int main()
{
    int num, d5, d4, d3, d2, d1, sum = 0, prod = 1;
    printf("Enter a FIVE digit number\n");
    scanf("%d", &num);


    d5 = num / 10000;
    d4 = num / 1000 % 10;
    d3 = num / 100 % 10;
    d2 = num / 10 % 10;
    d1 = num % 10;
    printf("The fifth digit of the given number is  %d\n", d5);
    printf("The fourth digit of the given number is %d\n", d4);
    printf("The third digit of the given number is  %d\n", d3);
    printf("The second digit of the given number is %d\n", d2);
    printf("The first digit of the given number is  %d\n", d1);

    printf("The sum of digits of a five digit number %d\n", d5 + d4 + d3 + d2 + d1);

    while (num != 0)
    {
        int digit = num % 10;
        prod = prod * digit;
        sum = sum + digit;
        num = num / 10;
    }

    printf("The value of sum is %d\n", sum);
    printf("The value of prod is %d\n", prod);

    return 0;
}