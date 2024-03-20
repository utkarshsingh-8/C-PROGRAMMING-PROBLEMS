#include <stdio.h>

int main()
{
    //🕸️😂 VARIABLES , DATA TYPES 😂🕸️
    // SUM OF TWO NUMBERS                                          //👻👻👻
    /* int a, b;
     printf("enter the value of a and b\n");
     scanf("%d %d", &a, &b);
     printf("The sum of a and b is %d", a + b);*/

    // AREA OF A SQUARE
    /*int sq;                                                      //👻👻👻
    printf("Enter the Numeber you want to square\n");
    scanf("%d", &sq);
    printf("The square of the given number is %d", sq * sq);
    * /

    // AREA OF A CIRCLE                                            //👻👻👻
    float pi = 3.14, radius, area;
    printf("Enter the value of radius\n");
    scanf("%f", &radius);
    area = pi * (radius * radius);
    printf("The area of circle is %f", area);

    /*int a=4*3/6*2;
    printf("%d",a);*/

    // WRITE A PROGRAM TO CHECK A NUMBER IS DIVISIBLE BY 2 OR NOT  //👻👻👻
    /* int a;
     printf("Enter a number:");
     scanf("%d", &a);
     printf("%d\n", a % 2 == 0);
     printf("if output is 1 the number is divisble otherwise not");*/

    //🕸️😂 CONDITIONAL STATEMENTS 😂🕸️
   

    // PRINT THE NUMBERS FROM 1 TO 10                              //👻👻👻
    /*for (int i = 0; i <=10; i++)
    {
        printf("%d\n",i);
    }*/
    /* for (char ch = 'a'; ch <= 'z'; ch++)                        //👻👻👻
     {
         printf("%c\n", ch);
     }*/

    //🕸️😂 LOOP CONTROL 😂🕸️
    // PRINT THE NUMBER FROM 0 TO N USING N- IS GIVEN BY THE USER  //👻👻👻
    /*int n, i = 1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }*/

    /*int i = 10;                                                  //👻👻👻
    do
    {
        printf("%d\n", i);
        i--;
    } while (i >= 1);*/

    // int i=1;                                                    //👻👻👻
    // printf("%d\n",i++); // i==1
    // printf("%d\n",i);   // i==2
    // int i = 1;
    // printf("%d\n", ++i); // i==2
    // printf("%d\n", i);   // i==2
    // int i=1;
    // printf("%d\n",i--); // i==1
    // printf("%d\n",i);   // i==0
    // int i=1;
    // printf("%d\n",--i); // i==0
    // printf("%d\n",i);   // i==0

    // PRINT THE SUM OF FIRST N NATURAL NUMBERS                    //👻👻👻
    /*int j, n, sum = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (j = n; j >= 1; j--)
    {
        sum = sum + j;
        printf("%d\n", j);
    }
    printf("%d\n", sum);*/

    // PRINT THE TABLE OF A NUMBER ENTERED BY THE USER             //👻👻👻
    /* int n, count;
     printf("Enter the Number and the count\n");
     scanf("%d %d", &n, &count);
     for (int i = 1; i <= count; i++)
     {
         printf("%d\n", n * i);
     }*/

    // KEEP TAKING NUMBERS AS INPUT FROM THE USER UNTIL USER ENTERS AN ODD NUMBER
    // u                                                           //👻👻👻
    /*int n;
    do
    {
        printf("Enter the number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("Thank You");*/

    // KEEP TAKING NUMBERS AS INPUT FROM THE USER UNTIL USER ENTERS A NUMBERS IS A MULTILPE OF 7                                                //👻👻👻
    /*int n;                                                       //👻👻👻
    do
    {
        printf("Enter the number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 7 == 0)
        {
            break;
        }
    } while (1);
    printf("Number is divisible by 7");*/

    // PRINT ALL NUMBERS FROM 1 TO 10 EXCEPT 6                     //👻👻👻
    /*for (int i = 1; i < 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("%d\n", i);
    }*/

    // PRINT ALL THE ODD NUMBERS BETWEEN 5 TO 50                   //👻👻👻
    /*for (int i = 5; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }*/

    // PRINT THE FACTORIAL OF A NUMBER N                           //👻👻👻
    /*int fact = 1, n;
    printf("Enter the Number 'n':");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of 'n' is %d", fact);*/

    // PRINT REVERSE OF THE TABLE FOR A GIVEN NUMBER N             //👻👻👻
    /*int n, count;
     printf("Enter the Number and the count\n");
     scanf("%d %d", &n, &count);
     for (int i = count; i >=1; i--)
     {
         printf("%d\n", n * i);
     }*/

    // CALCULATE THE SUM OF ALL NUMBERS BETWEEN 5 AND 50(INCLUDING 5 AND 50)
    // U                                                           //👻👻👻
    /*int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("Sum is %d", sum);*/

    return 0;
}
