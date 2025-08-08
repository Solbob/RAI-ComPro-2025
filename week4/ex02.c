#include <stdio.h>

int main() {
    float sum = 0;
    float num = 0;
    int i = 1;
  
    while (i < 11) {
        printf("%d.Enter a number: ", i);
        scanf("%f", &num);
        sum = sum + num;
        i++;
    }
    printf("Total sum is: %.2f\n", sum);
    return 0;
}