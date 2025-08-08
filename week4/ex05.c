#include <stdio.h>

int main() {
    int i;
    int fac;
    int result = 1;

    printf("Enter a number: \n");
    scanf("%d", &fac);
    for (i = fac; i >= 1; i--) {
        result = result * i;
    }
    printf("Factorial of %d is: %d\n", fac, result);
    return 0;
}