#include <stdio.h>

int main() {
    int i = 0;
  
    do {
        i > 0;
        printf("Enter a number: ");
        scanf("%d", &i);
        if (i == 0) {
            printf("Exiting program... Bye");
            break;
        }
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        } 
        
        
    }
    while (1);

    return 0;
}