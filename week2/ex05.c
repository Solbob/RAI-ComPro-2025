#include<stdio.h>
  
int main() {
    char name[20];
    int age;
    float height;
    char uni[20];

    printf("Enter your full name: ");
    scanf(" %[^\n]%*s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height in cm: ");
    scanf("%f", &height);
    printf("Enter your university name: ");
    scanf(" %[^\n]%*s", uni);

    printf("Hi! Everyone. This is %s from %s. I am %d years old and my height is %.2f cm tall.", name, uni, age, height);

    return 0;
}