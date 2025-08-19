#include <stdio.h>

int main() {
    int original[] = {1,2,3,4,5,6,7,8,9};
    int mirrored[9];
    printf("Reversed Array: ");
    for (int i = 0; i < 9; i++) {
        mirrored[i] = original[8-i];
        printf("%d ", mirrored[i]);
    }
    
    return 0;
}