#include <stdio.h>

int main()
{
    int num, d5, d4, d3, d2, d1,rev;
    printf("Enter a digit number\n");
    scanf("%d", &num);

    d5 = num / 10000;
    d4 = num / 1000 % 10;
    d3 = num / 100 % 10;
    d2 = num / 10 % 10;
    d1 = num % 10;
    /*printf("The fifth digit of the given number is  %d\n", d5);
    printf("The fourth digit of the given number is %d\n", d4);
    printf("The third digit of the given number is  %d\n", d3);
    printf("The second digit of the given number is %d\n", d2);
    printf("The first digit of the given number is  %d\n", d1);*/
    rev=d1*10000+d2*1000+d3*100+d4*10+d5;

    printf("The inputed number is %d and the reverse number of the given is %d\n",
     num,rev);

     if (num==rev)
     {
         printf("The inputted number==reversed number\n");
     }
     else
     printf("The inputted number is not equal to reversed number\n");

    return 0;
}