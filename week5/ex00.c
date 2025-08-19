#include <stdio.h>

int main() {
    int array[3][3],i,j;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter numbers [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n***Matrix***\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}