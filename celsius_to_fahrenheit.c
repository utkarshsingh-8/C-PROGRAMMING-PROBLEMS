//CELSIUS TO FAHRENHEIT
#include <stdio.h>
float temperature(float x);

int main()
{
    float cel, fah;
    printf("Enter the value of temperature in degree celsius\n");
    scanf("%f", &cel);
    printf("The temperature in degree fahrenheit is %f", temperature(cel));
    return 0;
}
float temperature(float x)
{
    float fah;
    fah = 32 + (x * 9.0 / 5);
    return (fah);
}