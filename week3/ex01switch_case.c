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
    switch (m)
    {
    case 1:
        printf("Ans: Num1 + Num2 = %.2f\n", g + f);
        break;
    case 2:
        printf("Ans: Num1 - Num2 = %.2f\n", g - f);
        break;
    case 3:
        printf("Ans: Num1 * Num2 = %.2f\n", g * f);
        break;
    case 4:
        if (f != 0)
            printf("Ans: Num1 / Num2 = %.2f\n", g / f);
        else
            printf("No Division by zero\n");
        break;
    case 5:
        if ((int)f != 0)
            printf("Ans: Num1 %% Num2 = %d\n", (int)g % (int)f);
        else
            printf("No Division by zero\n");
        break;
    }
    return 0;
}