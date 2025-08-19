#include <stdio.h>

int main() {
    int amount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &amount);

    int numbers[999];
    printf("Enter %d integers: ", amount);
    for (int i = 0; i < amount; i++) {
        scanf("%d", &numbers[i]);
    }

    int counted[999] = {0}; 

    for (int i = 0; i < amount; i++) {
        if (counted[i]) continue; 

        int count = 1;
        for (int j = i + 1; j < amount; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
                counted[j] = 1; 
            }
        }
        printf("Number %d occurs %d times\n", numbers[i], count);
    }

    return 0;
}