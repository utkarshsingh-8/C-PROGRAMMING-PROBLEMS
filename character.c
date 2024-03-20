#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character value from the keyboard\n");
    scanf("%c", &ch);

    if (ch >=65 && ch <=90)
    printf("Entered character is a Capital Letter\n");

    if (ch >=97 && ch <=122)
    printf("Entered character is a Small case Letter\n");

    if (ch >=48 && ch <=57)
    printf("Entered character is a Digit\n");

    if ((ch >=0 && ch <=47) || (ch >=58 && ch <=64) || (ch >=91 && ch <=96) || (ch >=123 && ch <=127))
    printf("Entered character is a Special Symbols\n");

    return 0;
}