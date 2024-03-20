#include<stdio.h>

int main()
{
float cel,fah;
/*printf("Enter the value of temperature in celsius\n");
scanf("%f",&cel);
fah=(cel*9.0/5)+32;
printf("The temperatute in fahrenheit is %f",fah);*/
printf("Enter the value of temperature in fahrenheit\n");
scanf("%f",&fah);
cel=(fah-32)*5.0/9;
printf("The value of temperature in celsius is %f",cel);
return 0;
}