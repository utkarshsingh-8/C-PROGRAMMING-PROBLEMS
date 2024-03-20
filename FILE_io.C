#include <stdio.h>

int main()
{
    FILE *fptr;
    // CHECK IF A FILE EXISTS BEFORE READING FROM IT                   //🙂🙂🙂🙂
    // if file not exist in reading mode it returns a NULL pointer
    // if file not exist in writing mode it creates it , if exist it deletes its data and update
    /*fptr = fopen("HELLO.txt", "r");
    (fptr == NULL) ? printf("File does't exist\n") : fclose(fptr);

    fptr = fopen("HELLO.txt", "w");
    (fptr == NULL) ? printf("File does't exist\n") : fclose(fptr);*/

    // READING FROM A FILE                                             //🙂🙂🙂🙂
    /*fptr = fopen("HELLO.txt", "r");
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("Character is %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Character is %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Character is %d\n", ch);*/

    /*fptr = fopen("HELLO0.txt", "r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character is %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character is %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character is %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("Character is %c\n", ch);
    fclose(fptr)*/

    // WRITING TO A FILE                                               //🙂🙂🙂🙂
    /*fptr = fopen("test.txt", "w");
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');*/

    // APPEND TO A FILE                                                //🙂🙂🙂🙂
    /*fptr = fopen("test.txt", "a");
    fprintf(fptr, "%c", 'B');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'A');*/

    // USE OF fgetc()                                                  //🙂🙂🙂🙂
    /*fptr = fopen("test.txt","r");
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));*/

    // USE OF fputc()                                                  //🙂🙂🙂🙂
    /*fptr = fopen("test.txt", "w");
    fputc('O', fptr);
    fputc('R', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);/
    fputc('E', fptr);*/

    // USE OF EOF(END OF FILE)                                         //🙂🙂🙂🙂
    /*fptr = fopen("end_file.txt", "r");
    char ch;
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);*/

    // MAKE A PROGRAM TO READ 5 INTEGERS FROM A FILE                   //🙂🙂🙂🙂
    /*fptr = fopen("FIVE.txt", "r");
    int num;
    fscanf(fptr, "%d", &num);
    printf("Number = %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Number = %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Number = %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Number = %d\n", num);
    fscanf(fptr, "%d", &num);
    printf("Number = %d\n", num);
    fclose(fptr);*/

    // MAKE A PROGRAM TO INPUT STUDENT INFORMATION FROM A USER & ENTER IT TO A FILE
    // X                                                               //🙂🙂🙂🙂
    /*fptr = fopen("STUDENT.txt", "a");

    char name[100];
    int age;
    float cgpa;

    printf("Enter Name : ");
    scanf("%s", name);
    printf("Enter Age : ");
    scanf("%d", &age);
    printf("Enter CGPA : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "NAME = %s\n", name);
    fprintf(fptr, "AGE %d\n", age);
    fprintf(fptr, "CGPA %f\n", cgpa);*/

    // WRITE A PROGRAM TO WRITE ALL THE ODD NUMBERS BETWEEN 1 TO N IN A FILE
    // X                                                               //🙂🙂🙂🙂
    fptr=fopen("odd.txt","w");
    

    return 0;
}