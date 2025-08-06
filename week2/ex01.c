#include<stdio.h>
  
int main() {
    char str[90];
    int g;
    float n;
    printf("Please enter an integer value: ");
    scanf("%d",&g);
    printf("You entered %d\n",g);
    printf("Please enter a float value: ");
    scanf("%f", &n);
    printf("You entered %f\n",n);
    printf("Please enter a character: ");
    scanf("%s", str);
    printf("You entered %s\n", str);
    return 0;
}