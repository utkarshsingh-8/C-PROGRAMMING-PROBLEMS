#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <conio.h>

#define j 8 // macro form variable declaration
int k;      // global variable declaration
int k = 10; // we can redeclare a global variable when it is not first initialized but cannot if it was previously initialized
int l = 20; // external variable declaration ,by default it is initialized 0

int main()
{
    // ESCAPE SEQUENCE                                              //😵‍💫😵‍💫😵‍💫😵‍💫
    /*printf("Hello to the world\r of programming"); // carriage return
    printf("\n");
    printf("Hello to the world\v of programming"); // add new line when encounter
    printf("\n");
    printf("Hello to the world\n of programming"); // add new line when encounter
    printf("\n");
    printf("Hello to the world\f of programming"); // add new line when encounter
    printf("\n");
    printf("Hello to the world\t of programming"); // add horizontal tab
    printf("\n");
    printf("Hello to the world\a of programming"); // do nothing
    printf("\n");
    printf("Hello to the world\b of programming"); // backspace a word
    printf("\n");
    printf("Hello to the world of programming\\"); // add a backward slash
    printf("\n");
    printf("Hello to the world of programming\'"); // add single quote
    printf("\n");
    printf("Hello to the world of programming\""); // add double quote
    printf("\n");
    printf("Hello to the world of programming\?"); // add question mark
    printf("\n");
    printf("Hello to the world\0 of programming"); // not print the later character
    printf("\n");*/

    // USE OF MODULAR DIVISION OPERATOR                             //😵‍💫😵‍💫😵‍💫😵‍💫
    /*printf("%d\n", 9 % 2);   // 1
    printf("%f\n", 9 % 2);   // 0.000
    printf("%d\n", 8.0 % 2); // error not applicable on float value*/

    // DOUBLE DATA TYPE                                             //😵‍💫😵‍💫😵‍💫😵‍💫
    /*double value = 5.25;
    printf("The value of double is %lf", value);*/

    // Octal Number System                                          //😵‍💫😵‍💫😵‍💫😵‍💫
    // Base 8 number system which consists numbers {0, 1, 2, 3, 4, 5, 6, 7}.
    // int num = 022; // = 2 x 8^1 + 2 x 8^0   into decimal equivalent
    // printf("%d\n", num);

    // Hexadecimal Number System                                    //😵‍💫😵‍💫😵‍💫😵‍💫
    // Base 16 number system which consists numbers {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f}.
    // (1 x 16^3) + (2 x 16^2) + (F x 16^1)+ (5 x 16^0) into decimal equivalent
    // int number = 0X12F5;
    // printf("%d\n", number);

    // char ch[] = "Hello@\' 34";                                   //😵‍💫😵‍💫😵‍💫😵‍💫
    // printf("%s\n", ch);
    // printf("%d\n", sizeof(ch));

    // TYPE CONVERSION                                              //😵‍💫😵‍💫😵‍💫😵‍💫
    // int k = 455;
    // printf("%f\n", (float)k);

    /*printf("minimum int value = %d\n"                             //😵‍💫😵‍💫😵‍💫😵‍💫
           "maximum int value = %d\n"
           "size of int in bytes = %zu\n"
           "size of int in bits = %zu",
           INT_MIN, INT_MAX, sizeof(int),
           sizeof(int) * CHAR_BIT);*/

    // DIFFERENT TYPES OF VARIABLES                                 //😵‍💫😵‍💫😵‍💫😵‍💫
    // Constant variable can only be initialized at the time of declaration.
    /*const int i = 55;
    printf("%d\n", i);

    // Also define like this #define j 8 in header file
    printf("%d\n", j);

    // GLOBAL VARIABLE ,it can be redefined in the same block
    printf("%d\n", k);

    // EXTERN VARIABLE ,it cannot be redefined in the same block
    extern int l;
    printf("%d\n", l);

    // STATIC VARIABLE, by default it is initialised zero
    static int m;
    printf("%d\n", m);

    // AUTOMATIC VARIABLE
    auto int n = 41;
    printf("%d\n", n);*/

    // DIFFERENT TYPES OF DATA-TYPES                                //😵‍💫😵‍💫😵‍💫😵‍💫
    // ENUMERATION DATA TYPE
    // it is used for integer constant & character constant
    /*enum week {mon,tues,wed,thu,fri,sat,sun};
    enum week day;
    day=sat;
    printf("%d\n",day);

    enum number { num = 'a'};
    printf("%c", num);

    // BOOL DATA TYPE
    bool x = 15;
    printf("%d", x);

    // float x = 0.1;
    // printf("%d %d %d", sizeof(x), sizeof(0.1), sizeof(0.1f));

    // IF NO DATA-TYPE IS DEFINED BY DEFAULT INT IS ASSIGNED
    signed a = 5;

    // CHARACRER ARITHMETIC
    char ch1 = 125, ch2 = 10;
    ch1 = ch1 + ch2;
    printf("%d\n", ch1);
    printf("%c\n", ch1 - ch2 - 4);*/

    // char st[] = "CODING";
    // printf("While printing ");
    // printf(", the value returned by printf() is : %d", printf("%s", st));

    // Scansets in C
    // char str[128];
    // printf("Enter a string: ");
    //  scanf("%[A-Z]s", str);
    //  scanf("%[a-z]s", str);
    //  scanf("%[0-9]s", str);
    //  scanf("%[0-9,a-z]s", str);
    //  scanf("%[0-9,a-z,A-Z]s", str);
    // printf("You entered: %s\n", str);

    // If first character of scanset is ‘^’, then the specifier will stop reading after first occurrence of that character.
    // printf("Enter a string: ");
    // scanf("%[^o]s", str);
    // printf("You entered: %s\n", str);

    // printf("Geek%sforGeek%s");
    // puts("Geek%sforGeek%s");

    // int c;
    // printf("geeks for %ngeeks ", &c);
    // printf("%d", c);

    // printf("%%"); //output= %
    // printf("%c", '%');
    // printf("%s", "%");

    /*char buffer[50];
    int a = 10, b = 20, c;
    c = a + b;
    sprintf(buffer, "Sum of %d and %d is %d", a, b, c);

    // The string "sum of 10 and 20 is 30" is stored
    // into buffer instead of printing on stdout
    printf("%s", buffer);*/

    // Difference between getc(), getchar(), getch() and getche()
    // printf("%c\n", getc(stdin));
    // printf("%c\n", getchar());
    // printf("%c\n", getch());
    // printf("%c\n", getche());

    // C program to demonstrate the difference
    // between %i and %d specifier
    /*int a, b, c;
 
    printf("Enter value of a in decimal format:");
    scanf("%d", &a);
 
    printf("Enter value of b in octal format: ");
    scanf("%i", &b);
 
    printf("Enter value of c in hexadecimal format: ");
    scanf("%i", &c);
 
    printf("a = %d, b = %i, c = %i", a, b, c);*/

    char ch[50] ,sh[20];
    scanf("%s",sh);
    scanf("\n");
    scanf("%[^\n]%*c",ch);
    printf("The String is : %s\n",sh);
    printf("The String is : %s",ch);
 

    return 0;
}
