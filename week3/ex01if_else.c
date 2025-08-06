#include <stdio.h>

int main()
{
    float g, f;
    int m;
    printf("Enter Num1: ");
    scanf("%f", &g);
    printf("Enter Num2: ");
    scanf("%f", &f);
    printf("Calculator Menu: \n1. +\n2. -\n3. *\n4. /\n5. %% \n");
    printf("Choose menu: ");
    scanf("%d", &m);
    if (m == 1)
    {
        printf("Ans: Num1 + Num2 = %.2f\n", g + f);
    }
    else if (m == 2)
    {
        printf("Ans: Num1 - Num2 = %.2f\n", g - f);
    }
    else if (m == 3)
    {
        printf("Ans: Num1 * Num2 = %.2f\n", g * f);
    }
    else if (m == 4)
    {
        if (f != 0)
            printf("Ans: Num1 / Num2 = %.2f\n", g / f);
        else
            printf("No Division by zero\n");
    }
    else if (m == 5)
    {
        int ig = (int)g;
        int skibidi = (int)f;
        if (skibidi != 0)
            printf("Ans: Num1 %% Num2 = %d\n", ig % skibidi);
        else
            printf("No Division by zero\n");
    }
    return 0;
}