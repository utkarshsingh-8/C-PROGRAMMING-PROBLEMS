#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;
    printf("Enter the value of angle1  angle2  angle3\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180)
    {
        printf("Triangle is formed\n");
    }
    else
    {
        printf("Triangle is not formed\n");
    }
    return 0;
}