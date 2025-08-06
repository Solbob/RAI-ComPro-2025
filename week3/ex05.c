#include <stdio.h>

int main()
{

    int h;
    float r;
    float v;

    printf("Enter a cone height: ");
    scanf("%d", &h);
    printf("Enter a cone base radius: ");
    scanf("%f", &r);
    printf("The cone volume is: %.2f cm^3\n", (v = (3.14 * r * r * h) / 3));

    if (v > 260)
    {
        printf("The cone is perfect for Supun project\n");
    }
    else
    {
        printf("The cone is not fit for this project\n");
    }

    return 0;
}