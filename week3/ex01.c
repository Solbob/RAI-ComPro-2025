#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    if (a != b)
    {
        printf("Does not match, try again\n");
    }
    else
    {
        printf("Match\n");
    }
    return 0;
}