#include <stdio.h>

int main() {
    int array[9];
    for (int i = 0; i < 10; i++) {
        printf("Enter the value %d here: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\nValues in array are: ");
for (int i = 0; i < 10; i++) {
    if (i == 9) {
        printf("%d", array[i]);
    } else {
        printf("%d, ", array[i]);
    }
}
    return 0;
}