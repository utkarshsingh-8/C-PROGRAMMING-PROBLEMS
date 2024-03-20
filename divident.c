/* Write a program where the user is asked to enter two
integers (divisor and dividend) and the quotient and the
remainder of their division is computed.(Both divisor and
dividend should be integers.*/

#include <stdio.h>

int main()
{
    int divi, div, quo, rem;
    printf("Enter the value of divident\n");
    scanf("%d", &divi);
    printf("Enter the value of divisor\n");
    scanf("%d", &div);
    quo = divi / div;
    rem = divi % div;
    printf("The value of quotient is %d\n", quo);
    printf("The value of remainder is %d\n", rem);
    return 0;
}