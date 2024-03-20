#include <stdio.h>

int main()
{
    int SP, CP, profit, loss;
    printf("Enter the Cost price and selling price of the item\n");
    scanf("%d %d", &CP, &SP);

    profit = SP - CP;
    loss = CP - SP;
    if (SP > CP)
    //if (profit>0)
    {
        printf("The shopkeeper made a profit\n");
        printf("The profit he made is %d\n", profit);
    }

    if (SP < CP)
    //if (loss>0)
    {
        printf("The shopkeeper gone in loss\n");
        printf("The loss he get is %d\n", loss);
    }

    if (profit == 0)
        printf("The shopkeeper not either in profit or loss\n");

    return 0;
}