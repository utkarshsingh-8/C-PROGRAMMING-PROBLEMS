// Write a Program to Find Factorial of a given number N(N is entered by user)
#include <stdio.h>
int factorial(int number);

int main()
{
    int fact = 1, n, value;
    printf("Enter any Number:");
    scanf("%d", &n);

    // 1st METHOD                                       // Using CONDITIONS 🙄🙄🙄🙄
    /*if (n < 0)
    {
        printf("Error! Factorial of number not exist:");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    printf("The value of Factorial is : %d", fact);*/

    value = factorial(n);
    printf("The value of Factorial is %d", value);

    return 0;
}

// 2nd METHOD                                          // Using RECURSIONS  🙄🙄🙄🙄
int factorial(int number)
{
    return (number == 0 || number == 1) ? 1 : (number * factorial(number - 1));
}
