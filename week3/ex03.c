#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch (a > 100)
    {
    case 1:
        printf("Out of range\n");
        break;
    case 0:
        switch (a % 2)
        {
        case 0:
            printf("Even number\n");
            break;
        case 1:
                }
        break;
    }

    return 0;
}