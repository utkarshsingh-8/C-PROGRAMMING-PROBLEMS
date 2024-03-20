// CREATE A STRING FIRSTNAME AND LASTNAME TO STORE DETAILS OF USER & PRINT ALL THE CHARACTERS USING A LOOPS
// X                                                                   //😵😵😵😵
/*#include <stdio.h>
void printString(char arr[]);

int main()
{
    char firstName[] = "UTKARSH";
    char lastName[] = "SINGH";
    printString(firstName);
    printString(lastName);

    // for (int i = 0; i < 7; i++)
    //{
    //     printf("%c", firstName[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < 5; i++)
    //{
    //     printf("%c", lastName[i]);
    // }
    return 0;
}

void printString(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");
}*/

//#include <stdio.h>
//#include <string.h>

// int main()
//{
//  ASK THR USER TO ENTER THEIR FIRSTNAME & PRINT IT BACK TO THEM USING '%s' SPECIFIERS                                                          //😵😵😵😵
/*char FirstName[20];
scanf("%s", FirstName);
printf("The name you entered is %s", FirstName);*/

/* TAKE MULTI-WORD INPUT AND PRINT OUTPUT USING GETS,FGETS,AND PUTS //😵😵😵😵
 gets() INPUT A MULTI-WORD STRING (DANGEROUS & OUTDATED)
 fgets=(str,n,file) file==stdin (STOPS WHEN N-1 CHAR INPUT OR NEW LINE IS ENTERED)
puts() OUTPUT THE STRINGS AND NEW LINE AT THE END AUTOMATICALLY*/
/*char name[30];
// gets(name);
fgets(name, 30, stdin);
puts(name);*/

// STRING USING ARRAYS CANNOT BE REINITIALIZED                      //😵😵😵😵
/*char ch[] = "Hello";
puts(ch);
ch = "World";
puts(ch);*/

// STRING USING POINTERS CAN BE REINITIALIZED                       //😵😵😵😵
/*char *chh = "Hello World";
puts(chh);
chh = "Namaste Duniya";
puts(chh);*/

// MAKE A PROGRAM THAT INPUT USER'S NAME AND PRINT ITS LENGTH       //😵😵😵😵
/*char Username[30];
puts("Enter the String:");
fgets(Username,30,stdin);
int count =0;

while (Username[count] != '\0')
{
    count++;
}
printf("The Length of the string is %d:",count-1);*/

// STANDARD LIBRARY FUNCTIONS  👻👻👻

// 1ST strlen() count number of characters excluding '\0'           //😵😵😵😵
// char name[] = "Utkarsh Singh";
// printf("The length of string %s is %d", name, strlen(name));

// 2nd strcpy(newStr,oldStr) copies of old string into new          //😵😵😵😵
// char oldstring[] = "Hello";
// char newstring[] = "World";
// strcpy(newstring,oldstring);
// printf("The newstring value is %s",newstring);

// 3rd strcat(firstStr,secondStr) Concate the both string           //😵😵😵😵
// first string has enough capacity to hold the second string after concatenation
// char firstStr[] = "Hello World";
// char secondStr[] = " Utkarsh is Here";
// strcat(firstStr, secondStr);
// printf("String after concatenation %s", firstStr);

// 4th strcmp(firstStr,secondStr)compares two str and return value  //😵😵😵😵
// char firstStr[] = "Hello World";
// char secondStr[] = "Apple";
// strcat(firstStr, secondStr);
// printf("String after comparison is  %d", strcmp(firstStr, secondStr));

// TAKE A STRING INPUT FROM THE USER USING '%c' SPECIFIR            //😵😵😵😵
/*char str[50];
char ch;
int i = 0;

while (ch != '\n')
{
    scanf("%c", &ch);
    str[i] = ch;
    i++;
}
str[i] = '\0';
printf("The string you entered is %s", str);*/

// FIND THE SALTED FORM OF A PASSWORD ENTERED BY THE USER IF THE SALT IS '123' & ADDED AT THE END
// X                                                                //😵😵😵😵
/*char password[20];
char salt[] = "123";
printf("Enter Password:\n");
scanf("%s", password);
printf("The salted form of a password is %s", strcat(password, salt));*/

//   return 0;
//}

// WRITE A FUNCTION NAMED SLICE WHICH TAKES A STRING AND RETURNS A SLICE STRING FROM INDEX M TO N
// X                                                                //😵😵😵😵
/*#include <stdio.h>
void sliceString(char str[], int m, int n);

int main()
{
    char string[100];
    printf("Enter the string\n");
    scanf("%s", string);
    sliceString(string, 3, 6);
}

void sliceString(char str[], int m, int n)
{
    char newStr[100];
    int j = 0;
    for (int i = m; i <= n; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}*/

// WRITE A FUNCTION TO COUNT THE OCCURRENCE OF VOWELS IN A STRING   //😵😵😵😵
/*#include <stdio.h>
int countVowels(char str[]);

int main()
{
    char string[100];
    printf("Enter the string\n");
    scanf("%s", string);
    printf("The Occurence of Vowels in the string is %d\n", countVowels(string));
}

int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}*/

// WRITE A FUNCTION TO COUNT THE OCCURRENCE OF CONSONANTS IN A STRING//😵😵😵😵
/*#include <stdio.h>
#include <string.h>
int countConso(char str[]);

int main()
{
    char string[100];
    printf("Enter the string\n");
    scanf("%s", string);
    printf("The Occurence of Consonants in the string is %d\n", countConso(string));
}

int countConso(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return strlen(str) - count;
}*/

// CHECK IF A GIVEN CHARACTER IS PRESENT IN A STRING OR NOT          //😵😵😵😵
/*#include <stdio.h>
void checkChar(char str[], char ch);

int main()
{
    char string[50];
    char ch;
    printf("Enter the string and Character You want to check is present in string or not :\n");
    scanf("%s\n", string);
    scanf("%c", &ch);
    checkChar(string, ch);

    return 0;
}

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Present in String");
            return;
        }
    }
    printf("String is not present");
}*/
