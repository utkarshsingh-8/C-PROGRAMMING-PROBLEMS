#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    float cgpa;
    char name[50];
};
void printInfo(struct student s1);

typedef struct employee
{
    int id;
    float age;
    char name[50];
} emp;

typedef struct address
{
    int house_no;
    int block;
    char city[20];
    char state[20];
} add;
void takeAddress(struct address add);
void printAddress(struct address add);

struct vector
{
    int x;
    int y;
};
int sumVector(struct vector V1, struct vector V2, struct vector sum);

struct complex_numbers
{
    int real;
    int imag;
};

typedef struct bank_account_information
{
    char name[20];
    int acc_no;
} bank_a_info;

int main()
{
    // WRITE A PROGRAM TO STORE THE DATA OF THREE STUDENTS             //😏😣😏😣
    /*struct student s1;
    s1.roll_no = 18;
    s1.cgpa = 9.8;
    strcpy(s1.name, "UTKARSH");
    printf("%d\n", s1.roll_no);
    printf("%f\n", s1.cgpa);
    printf("%s\n", s1.name);

    struct student s2;
    s2.roll_no = 55;
    s2.cgpa = 9.0;
    strcpy(s2.name, "SINGH");
    printf("%d\n", s2.roll_no);
    printf("%f\n", s2.cgpa);
    printf("%s\n", s2.name);

    struct student s3;
    s3.roll_no = 25;
    s3.cgpa = 7.3;
    strcpy(s3.name, "THAKUR");
    printf("%d\n", s3.roll_no);
    printf("%f\n", s3.cgpa);
    printf("%s\n", s3.name);*/

    // Initialisation of structures                                    //😏😣😏😣
    /*struct student s4 = {22, 5.85, "Vicky"};
    printf("%d\n", s4.roll_no);
    printf("%f\n", s4.cgpa);
    printf("%s\n", s4.name);*/

    // STRUCTURES AS ARRAYS
    /*struct student IT[10];
    IT[0].roll_no = 22;
    IT[0].cgpa = 5.22;
    strcpy(IT[0].name, "VIJAY");
    printf("The roll no. of IT[1] student is %d\n", IT[0].roll_no);
    printf("The CGPA no. of IT[1] student is %f\n", IT[0].cgpa);
    printf("The name of IT[1] student is %s\n", IT[0].name);*/

    // POINTERS TO STRUCTURES                                          //😏😣😏😣
    /*struct student s5 = {25, 8.85, "Sunny"};
    struct student *ptr;
    ptr = &s5;
    printf("The roll no. of IT[1] student is %d\n", s5.roll_no);
    printf("The CGPA no. of IT[1] student is %f\n", s5.cgpa);
    printf("The name  of IT[1] student is %s\n", s5.name);
    // print using pointers
    printf("The roll no. of IT[1] student is %d\n", (*ptr).roll_no);
    printf("The CGPA no. of IT[1] student is %f\n", (*ptr).cgpa);
    printf("The name of IT[1] student is %s\n", (*ptr).name);
    // print using arrow operators
    printf("The roll no. of IT[1] student is %d\n", ptr->roll_no);
    printf("The CGPA no. of IT[1] student is %f\n", ptr->cgpa);
    printf("The name of IT[1] student is %s\n", ptr->name);*/

    // PASSING STRUCTURE TO FUNCTION                                   //😏😣😏😣
    // struct student s6 = {33, 35, "Rohan"};
    // printInfo(s6);

    // TYPEDEF EXAMPLE                                                 //😏😣😏😣
    /*emp employee1 = {99, 9.45, "Lucky"};
    printf("The ID no. of Employee is %d\n", employee1.id);
    printf("The age of Employee is %f\n", employee1.age);
    printf("The name of Employee is %s\n", employee1.name);*/

    // ENTER ADDRESS (house no.,block,city,state) OF 5 PEOPLE          //😏😣😏😣
    /*add people[5];
    printf("Enter First people address\n");
    takeAddress(people[0]);
    printf("Enter second people address\n");
    takeAddress(people[1]);
    printf("Enter third people address\n");
    takeAddress(people[2]);
    printf("Enter fourth people address\n");
    takeAddress(people[3]);
    printf("Enter fifth people address\n");
    takeAddress(people[4]);

    printAddress(people[0]);
    printAddress(people[1]);
    printAddress(people[2]);
    printAddress(people[3]);
    printAddress(people[4]);*/

    // CREATE A STRUCTURE TO STORE VECTORS. THEN MAKE A FUNCTION TO RETURN SUM OF TWO VECTORS
    // X                                                               //😏😣😏😣
    /*struct vector v1 = {3, 5};
    struct vector v2 = {8, 2};
    struct vector sum = {0};
    sumVector(v1, v2, sum);*/

    // CREATE A STRUCTURE TO STORE COMPLEX NUMBERS                     //😏😣😏😣
    /*struct complex_numbers n1 = {11, 85};
    struct complex_numbers *ptr = &n1;
    printf("The value of real part is %d\n", ptr->real);
    printf("The value of complex part is %d\n", ptr->imag);*/

    // MAKE A STRUCTURE TO STORE BANK ACCOUNT INFORMATION OF A CUSTOMER OF ABC BANK ACCOUNT.ALSO MAKE AN ALIAS FOR IT
    // X                                                               //😏😣😏😣
    /*bank_a_info customer1;
    scanf("%s", &customer1.name);
    scanf("%d", &customer1.acc_no);
    printf("Customer name is %s\n", customer1.name);
    printf("Customer account no is %d\n", customer1.acc_no);*/

    return 0;
}

/*void printInfo(struct student s1)
{
    printf("Student information\n");
    printf("The roll no. of student is %d\n", s1.roll_no);
    printf("The CGPA no. of student is %f\n", s1.cgpa);
    printf("The name of student is %s\n", s1.name);
}*/

/*void takeAddress(struct address add)
{
    scanf("%d %d %s %s", &add.house_no, &add.block, &add.city, &add.state);
}
void printAddress(struct address add)
{
    printf("House No: =%d\t, Block =%d\t,City =%s\t , State =%s\n", add.house_no, add.block, add.city, add.state);
}*/

/*int sumVector(struct vector V1, struct vector V2, struct vector sum)
{
    sum.x = V1.x + V2.x;
    sum.y = V1.y + V2.y;
    printf("Sum of X is %d\n", sum.x);
    printf("Sum of Y is %d\n", sum.y);
}*/