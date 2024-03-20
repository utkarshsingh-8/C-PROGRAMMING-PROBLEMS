#include <stdio.h>

int main()
{
    float red, green, blue, white, black, cyan, magneta, yellow, max;

    printf("Enter the value of Red Green Blue in the range of 0 to 255\n");
    scanf("%f %f %f", &red, &green, &blue);

    if (red == 0 && green == 0 && blue == 0)
    {
        cyan = magneta = yellow = 0;
        black = 1;
        black = 1;
    }
    else
    {
        red = red / 255;
        green = green / 255;
        blue = blue / 255;

        max = red;
        if (green > max)
            max = green;
        if (blue > max)
            max = blue;

        /* white = max;
    cyan = ((white - (red / 255)) / white);
    magneta = ((white - (green / 255)) / white);
    yellow = ((white - (blue / 255)) / white);
    black = 1 - white;*/
        white = max;
        cyan = (white - red) / white;
        magneta = (white - green) / white;
        yellow = (white - blue) / white;
        black = 1 - white;
    }

    printf("The value of (CMYK) is (%f %f %f %f)\n", cyan, magneta, yellow, black);

    return 0;
}