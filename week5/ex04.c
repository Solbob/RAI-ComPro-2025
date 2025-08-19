#include <stdio.h>

int main() {
    int num[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("\nEven numbers: ");
    for (int i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            printf("%d ", num[i]);
        }
    }
    printf("\nOdd numbers: ");
    for (int i = 0; i < 10; i++) {
        if (num[i] % 2 != 0) {
            printf("%d ", num[i]);
        }
    }
    return 0;
}