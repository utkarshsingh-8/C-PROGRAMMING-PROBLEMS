// WRITE A FUNCTION TO FIND SUM OF DIGITS OF A NUMBER              //😖😖🙄🙄
/*#include <stdio.h>
int Sum_of_Digits(int n);

int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("The Sum of Digits of a number is %d", Sum_of_Digits(number));
    return 0;
}

int Sum_of_Digits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}*/

// WRITE A FUNCTION TO FIND SQUARE ROOT OF A NUMBER                //😖😖🙄🙄
/*#include <stdio.h>
#include <math.h>
float Sq_Root(float n);

int main()
{
    float number;
    printf("Enter the number:");
    scanf("%f", &number);
    printf("The Square root of the %f is %f", number, Sq_Root(number));
    return 0;
}

float Sq_Root(float n)
{
    float sqroot = sqrt(n);
    return sqroot;
}*/

// WRITE A FUNCTION TO PRINT "HOT" OR "COLD" DEPENDING ON THE TEMPERATURE USER ENTERS
// u                                                               //😖😖🙄🙄
/*#include <stdio.h>
void Temp(float temp);

int main()
{
    float temperature;
    printf("Enter the Temperature:");
    scanf("%f", &temperature);
    Temp(temperature);
    return 0;
}

void Temp(float temp)
{
    if (temp > 0)
    {
        printf("HOT");
    }
    else
    {
        printf("COLD");
    }
}*/

// MAKE YOUR POW FUNCTION                                          //😖😖🙄🙄
/*#include <stdio.h>
float power(float m, float n);

int main()
{
    float base, exponent;
    printf("Enter the value of Base and Exponent:\n");
    scanf("%f %f", &base, &exponent);
    printf("The power of %f to the %f is %f", exponent, base, power(base, exponent));
    return 0;
}

float power(float m, float n)
{
    float result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * m;
    }
    return result
}*/

// 👻👻👻 POINTERS 👻👻👻                                        //😖😖🙄🙄
/*#include <stdio.h>

int main()
{
    int age = 22;      // simple variable
    int *ptr = &age;   // pointer variable
    int **pttr = &ptr; // double pointer variable

    printf("%d\n", age);     // value of variable
    printf("%d\n", *(&age)); // value of variable
    printf("%d\n", *ptr);    // value at address of  pointer variable
    printf("%d\n", &age);    // address of variable in decimal form
    printf("%p\n", &age);    // address of variable in hexadecimal form
    printf("%d\n", ptr);     // value of pointer variable == address of another variable
    printf("%d\n", *(&ptr)); // value of pointer variable == address of another variable
    printf("%u\n", &ptr);    // address of pointer variable in decimal form
    printf("%p\n", &ptr);    // address of pointer variable in hexadecimal form
    printf("%d\n", pttr);    // address of another pointer variable
    printf("%d\n", **pttr);  // value at the address of another pointer variable address
    printf("%u\n", &pttr);   // address of double pointer in decimal form
    printf("%p\n", &pttr);
    // address of double pointer in hexadecimal form

    int *ptr;                                                      //😖😖🙄🙄
    int x;
    ptr = &x;
    *ptr = 0;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    *ptr += 5;
    printf(" x = %d\n", x);
    printf(" *ptr= %d\n", *ptr);
    (*ptr)++;
    printf(" x = %d\n", x);
    printf(" *ptr= %d\n", *ptr);

    return 0;
}*/

// SWAP TWO NUMBERS USING CALL BY VALUE                            //😖😖🙄🙄
/*#include <stdio.h>
int swap(int x, int y);

int main()
{
    int a = 3, b = 4;
    printf("The value of A and B before swap is %d and %d\n", a, b);
    swap(a, b);
    printf("The value of A and B after swap is %d and %d\n", a, b);
    return 0;
}

int swap(int x, int y)
{
    int z = y;
    y = x;
    x = z;
    printf("The value of x and y after swap is %d and %d\n", x, y);
}*/

// SWAP TWO NUMBERS USING CALL BY REFERENCE                        //😖😖🙄🙄
/*#include <stdio.h>
int swap(int *x, int *y);

int main()
{
    int a = 3, b = 4;
    printf("The value of A and B before swap is %d and %d\n", a, b);
    swap(&a, &b);
    printf("The value of A and B after swap is %d and %d\n", a, b);
    return 0;
}

int swap(int *x, int *y)
{
    int z = *y;
    *y = *x;
    *x = z;
    printf("The value of x and y after swap is %d and %d\n", *x, *y);
}*/

// CALL BY VALUE PASSING                                           //😖😖🙄🙄
/*#include <stdio.h>
void printAddress(int n);

int main()
{
    int n = 4;
    printAddress(n);
    printf("Address of n is : %u\n", &n);
    return 0;
}

void printAddress(int n)
{
    printf("Address of n is : %u\n", &n);
}*/

// CALL BY REFERENCE PASSING                                       //😖😖🙄🙄
/*#include <stdio.h>
int printAddress(int *n);

int main()
{
    int n = 4;
    printAddress(&n);
    printf("Address of n is : %u\n", &n);
    return 0;
}

int printAddress(int *n)
{
    printf("Address of n is : %d\n", n);
}*/

// WRITE A FUNCTION TO CALCULATE THE SUM, PRODUCT & AVERAGE OF 2 NUMBERS.
// PRINT THAT  AVERAGE IN MAIN FUNCTION                            //😖😖🙄🙄 1st
/*#include <stdio.h>
int sum(int x, int y);
int product(int x, int y);
float average(int x, int y);

int main()
{
    int a, b;
    printf("Enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    printf("Sum of Two numbers is %d\n", sum(a, b));
    printf("Product of Two numbers is %d\n", product(a, b));
    printf("Average of Two numbers is %f\n", average(a, b));

    return 0;
}
int sum(int x, int y)
{
    return x + y;
}
int product(int x, int y)
{
    return x * y;
}
float average(int x, int y)
{
    return (x + y) / 2.0;
}*/

// 2nd Method                                                      //😖😖🙄🙄 2nd
/*#include <stdio.h>
void doWork(int x, int y, int *sum, int *product, float *average);

int main()
{
    int a, b, sum, product;
    float average;
    printf("Enter the value of a and b:\n");
    scanf("%d %d", &a, &b);
    doWork(a, b, &sum, &product, &average);
    printf("Sum = %d Product = %d Average = %f", sum, product, average);
    return 0;
}

void doWork(int x, int y, int *sum, int *product, float *average)
{
    *sum = x + y;
    *product = x * y;
    *average = (x + y) / 2.0;
}*/

//#include <stdio.h>

// int main()
//{

//  POINTER INCREMENT (++) & DECREMENT (--)                       //😖😖🙄🙄
/*int age = 18;
int *ptr = &age;
printf("%d\n", ptr);
ptr++;
printf("%d\n", ptr);

char star = '*';
char *pttr = &star;
printf("%d\n", pttr);
pttr++;
printf("%d\n", pttr);*/

// POINTER DIFFERENCE & COMPARISON                                //😖😖🙄🙄
/*int age = 20;
int _age = 21;
int *ptr = &age;
int *pttr = &_age;
printf("%u %u The difference = %u\n", ptr, pttr, ptr - pttr);
pttr = &age;
printf("Comparison is %d\n", ptr == pttr);*/

// WRITE A PROGRAM TO ENTER THE PRICE OF 3 ITEMS & AND PRINT THEIR FINAL COST WITH GST
/*#include <stdio.h>                                             //😖😖🙄🙄

int main()
{
    float price[3]={55,45.23};
    //printf("Enter the Price of Three Items:\n");
    //scanf("%f", &price[0]);
    //scanf("%f", &price[1]);
    //scanf("%f", &price[2]);

    printf("Final Cost of 1st item is %f\n", price[0] + (0.18 * price[0]));
    printf("Final Cost of 2nd item is %f\n", price[1] + (0.18 * price[1]));
    printf("Final Cost of 3rd item is %f\n", price[2] + (0.18 * price[2]));
    return 0;
}*/

// INPUT AND OUTPUT ARRAY VALUES THROUGH LOOPS                     //😖😖🙄🙄 1st
/*int aadhar[5];
int *ptr = &aadhar[0];
printf("Enter the values of array\n");
for (int i = 0; i < 5; i++)
{
    scanf("%d\n", &aadhar[i]);
}
printf("The values You Entered in array are:\n");
for (int i = 0; i < 5; i++)
{
    printf("%d\n", aadhar[i]);
}*/

// X                                                               //😖😖🙄🙄 2nd
/*int aadhar[5];
int *ptr = aadhar;
printf("Enter the values of array\n");
for (int i = 0; i < 5; i++)
{
    scanf("%d\n", &aadhar[i]);
}
printf("The values You Entered in array are:\n");
for (int i = 0; i < 5; i++)
{
    printf("%d\n", aadhar[i]);
}*/
//    return 0;
//}

// ARRAYS AS FUNCTIONS ARGUMENTS                                   //😖😖🙄🙄 1st
/*#include <stdio.h>
void printNumbers(int arr[], int n);

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    printNumbers(array, 6);
    return 0;
}

void printNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}*/

// POINTERS AS FUNCTIONS ARGUMENTS                                 //😖😖🙄🙄 2nd
/*#include <stdio.h>
void printNumbers(int *arr, int n);

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    printNumbers(array, 6);
    return 0;
}

void printNumbers(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }
}*/

// WRITE A FUNCTION TO COUNT THE NUMBER OF ODD NUMBERS IN AN ARRAY //😖😖🙄🙄
/*#include <stdio.h>
int countOdd(int arr[], int n);

int main()
{
    int array[10] = {1, 22, 11, 2, 8, 11, 31, 5, 6, 9};
    printf("Count of odd numbers in array is %d\n", countOdd(array, 10));

    return 0;
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}*/

/*#include <stdio.h>                                               //😖😖🙄🙄

int main()
{
    int array[5]={1,2,3,4,5};
    printf("%d\n",*(array+2));
    printf("%d\n",*(array+5));

    return 0;
}*/

// WRITE A FUNCTION TO REVERSE AN ARRAY                            //😖😖🙄🙄 1st
/*#include <stdio.h>
int reverseArray(int arr[], int n);

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    printf("Array in Reverse form\n");
    reverseArray(array, 5);

    return 0;
}

int reverseArray(int arr[], int n)
{
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}*/

// WRITE A FUNCTION TO REVERSE AN ARRAY                            //😖😖🙄🙄 2nd
/*#include <stdio.h>
void reverseArray(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    printf("Array in Reverse form\n");
    reverseArray(array, 5);
    printArray(array, 5);

    return 0;
}

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n - i - 1];
        arr[i] = secondValue;
        arr[n - i - 1] = firstValue;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}*/

// WRITE A PROGRAM TO STORE THE FIRST N FIBONACCI NUMBERS          //😖😖🙄🙄
/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    printf("The fibonacci series of %d term is:\n", n);

    int fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    printf("%d\t %d\t", fibonacci[0], fibonacci[1]);

    for (int i = 2; i < n; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        printf("%d\t", fibonacci[i]);
    }
    return 0;
}*/

// CREATE A 2D ARRAY TO CREATE THE TABLES OF 2 & 3                 //😖😖🙄🙄
/*#include <stdio.h>
int storeTable(int arr[][10], int m, int n, int number);

int main()
{
    int Table[2][10];
    storeTable(Table, 0, 10, 2);
    storeTable(Table, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", Table[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", Table[1][i]);
    }
    return 0;
}

int storeTable(int arr[][10], int m, int n, int number)
{
    for (int i = 0; i < n; i++)
    {
        arr[m][i] = number * (i + 1);
    }
}*/

// WRITE A PROGRAM TO FIND THE MAXIMUM NUMBERS BETWEEN TWO NUMBERS USING A POINTERS
// x                                                               //😖😖🙄🙄
/*#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the value of num1 and num2:\n");
    scanf("%d %d", &num1, &num2);
    int *ptr = &num1;
    int *pptr = &num2;

    *ptr > *pptr ? printf("num1 is greater\n") : printf("num2 is greater");
    return 0;
}*/

// WRITE A PROGRAM TO PRINT THE ELEMENTS OF AN ARRAY IN REVERSE ORDER//😖😖🙄🙄 1st
/*#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *pptr = &arr[4];

    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *ptr);
        ptr++;
    }

    for (int j = 5; j >= 1; j--)
    {
        printf("%d\t", *pptr);
        pptr--;
    }
    return 0;
}*/

// x                                                               //😖😖🙄🙄 2nd
/*#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of array is %d\n", length);

    for (int j = length - 1; j >= 0; j--)
    {
        printf("%d\t", arr[j]);
    }
    return 0;
}*/

// WRITE A PROGRAM TO PRINT ALL THE LETTERS OF ENGLISH ALPHABET USING A POINTER
// X                                                               //😖😖🙄🙄 1st
/*#include <stdio.h>

int main()
{
    char ch[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char *print = &ch[0];

    for (int i = 1; i <= 26; i++)
    {
        printf("%c\t", *print);
        print++;
    }

    return 0;
}*/

// X                                                               //😖😖🙄🙄 2st
/*#include <stdio.h>

int main()
{
    char alphabet[26];
    int i;
    char *printAlphabet = alphabet;

    for (i = 0; i < 26; i++)
    {
        *printAlphabet = i + 'A';
        printAlphabet++;
    }

    printAlphabet = alphabet;
    printf("The Alphabets are : \n");
    for (i = 0; i < 26; i++)
    {
        printf(" %c ", *printAlphabet);
        printAlphabet++;
    }

    printf("\n\n");

    return 0;
}*/

// IN AN ARRAY OF NUMBERS,FIND HOW MANY TIMES DOES A NUMBER 'X' OCCURS//😖😖🙄🙄
