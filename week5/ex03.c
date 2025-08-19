#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    int highest = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
        if (i == 0 || marks[i] > highest) {
            highest = marks[i];
        }
    }
    printf("\nTotal Marks: %d", total);
    printf("\nHighest Marks: %d", highest);
    return 0;
}