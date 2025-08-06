#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        if (a > 100)
        {
            printf("Out of range\n");
        }
        else
            printf("Even number\n");
    }
    else
    {
        if (a > 100)
        {
            printf("Out of range\n");
        }
        else
            printf("Odd number\n");
    }

    return 0;
}