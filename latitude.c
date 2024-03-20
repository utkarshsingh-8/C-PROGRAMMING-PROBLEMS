#include <stdio.h>
#include <math.h>

int main()
{
    float L1, L2, G1, G2, D;
    const float PI = 3.141592;
    printf("Enter the value of Latitude :(L1,L2)\n");
    scanf("%f %f", &L1, &L2);
    printf("Enter the value of Longitude :(G1,G2)\n");
    scanf("%f %f", &G1, &G2);

    L1 = L1 * (PI / 180.0);
    L2 = L2 * (PI / 180.0);
    G1 = G1 * (PI / 180.0);
    G2 = G2 * (PI / 180.0);

    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));
    //D = 3963 * acos( sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1) );

    printf("The distance in nautical miles : %f", D);

    return 0;
}