#include <stdio.h>

int main() {
    float sum = 0;
    float num = 0;
  
    for (int i = 1; i < 11; i++) {
        printf("%d.Enter a number: ", i);
        scanf("%f", &num);
        sum = sum + num;
    }
    printf("Total sum is: %.2f\n", sum);
    printf("Average is: %.2f\n", sum / 10);
    return 0;
}