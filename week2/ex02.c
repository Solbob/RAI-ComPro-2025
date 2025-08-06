#include<stdio.h>
  
int main() {
    int g;
    printf("Enter total minutes: ");
    scanf("%d",&g);
    printf("%d hours and %d minutes\n", g / 60, g % 60);
    return 0;
}