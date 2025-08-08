#include <stdio.h>

int main() {
    int i = 0;
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Multiplication table for %d:\n", num);
    while(i<=12)
    {
        printf("%4d * %-2d = %-3d\n", num, i, num*i);
        i++;
    }
    return 0;
}