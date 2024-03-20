/*// WRITE 2 FUNCTIONS ONE TO PRINT "HELLO" AND OTHER "GOOD BYE";  //👿😨😡😬
#include <stdio.h>
void printHello();
void printGoodBye();

int main()
{
    printHello();
    printGoodBye();
    return 0;
}
void printHello()
{
    printf("Hello\n");
}
void printGoodBye()
{
    printf("Good Bye");
}*/

// WRITE A FUNCTION THAT PRINTS NAMASTE IF USER IS INDIAN & BONJOUR IF THE USER IS FRENCH
// u                                                                //👿😨😡😬
/*#include <stdio.h>
void printNamaste();
void printBonjour();

int main()
{
    printf("Enter f for french and i for indian:");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i')
    {
        printNamaste();
    }
    else
    {
        printBonjour();
    }
    return 0;
}
void printNamaste()
{
    printf("Namaste\n");
}
void printBonjour()
{
    printf("Bonjour\n");
}*/

// FUNCTION TO PRINT SUM OF TWO NUMBERS                             //👿😨😡😬
/*#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}*/

// PRINT TABLE OF A NUMBER N                                       //👿😨😡😬
/*#include <stdio.h>
int table(int x);

int main()
{
    int n;
    printf("Enter The Number:");
    scanf("%d", &n);
    printf("Table of %d\n", n);
    table(n);
    return 0;
}

int table(int x)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", x * i);
    }
}*/

// USE LIBRARY FUCTIONS TO CALCULATE THE SQUARE OF A NUMBER        //👿😨😡😬
/*#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("Square of the number %d is %f", n, pow(n, 2));
    return 0;
}*/

// WRITE FUNCTIONS TO CALCULATE THE AREA OF A SQUARE, A CIRCLE & A RECTANGLE
// U                                                               //👿😨😡😬
/*#include <stdio.h>
float areaSquare(float x);
float areaCircle(float w);
float areaRectangle(float y, float z);

int main()
{
    float a, b, c, d;
    printf("Enter the value of a,b,c d\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("Area of Square is %f\n", areaSquare(a));
    printf("Area of Circle is %f\n", areaCircle(b));
    printf("Area of rectangle is %f\n", areaRectangle(c, d));
}

float areaSquare(float x)
{
    return x * x;
}
float areaCircle(float w)
{
    return 3.14 * (w * w);
}
float areaRectangle(float y, float z)
{
    return y * z;
}*/

// SUM OF FIRST N  NATURAL NUMBERS                                 //👿😨😡😬
/*#include <stdio.h>
int sum(int n);

int main()
{
    int term;
    printf("Enter the term upto you want sum:\n");
    scanf("%d", &term);
    printf("Sum of first %d natural numbers is %d\n",term, sum(term));
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumN = sum(n-1) + n;
    return sumN;
}*/

// FACTORIAL OF N                                                  //👿😨😡😬
/*#include <stdio.h>
int fact(int n);

int main()
{
    int number;
    printf("Enter the number you want its factorial:\n");
    scanf("%d", &number);
    printf("The Factorial of %d is %d\n", number, fact(number));
    return 0;
}

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    int factorialN = fact(n - 1) * n;
    return factorialN;
}*/

// WRITE A FUNCTION TO CONVERT CELSIUS TO FAHREHEIT                //👿😨😡😬
/*#include <stdio.h>
float Cel_to_Fah(float Cel);

int main()
{
    float temperature;
    printf("Enter the value of temperature in Celsius :");
    scanf("%f", &temperature);
    printf("The Temperature in degree Fahrenheit is %f", Cel_to_Fah(temperature));
    return 0;
}

float Cel_to_Fah(float Cel)
{
    float fah = (Cel * 9 / 5) + 32;
    return fah;
}*/

// WRITE A FUNCTION TO CALCULATE PERCENTAGE OF A STUDENT FROM MARKS IN MATHS,SCIENCE & SANSKRIT                                                          //👿😨😡😬
/*#include <stdio.h>
float percentage_of_marks(float x, float y, float z);

int main()
{
    float maths, science, sanskrit;
    printf("Enter the marks of Maths,Science and Sanskrit\n");
    scanf("%f %f %f", &maths, &science, &sanskrit);
    printf("The percentage of marks of these subjects is %f", percentage_of_marks(maths, science, sanskrit));
}

float percentage_of_marks(float x, float y, float z)
{
    float percentage = (x + y + z) / 300 * 100;
    return percentage;
}*/

// WRITE A FUNCTION TO PRINT THE N TERMS OF A FIBONACCI SERIES     //👿😨😡😬
/*#include <stdio.h>
int fibonacci(int n);

int main()
{
    int term;
    printf("Enter the term upto you want Fibonacci series:");
    scanf("%d", &term);
    for (int i = 0; i < term; i++)
    {
        printf("%d\n", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}*/