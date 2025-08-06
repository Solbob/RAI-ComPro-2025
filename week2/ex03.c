#include<stdio.h>
  
int main() {
    char name[20];
    int age;
    float height;
    float weight;
    char gen;
    char school[20];
    printf("Enter your name: ");
    scanf("%[^\n]%*s",name);
    printf("\nEnter your age: ");
    scanf("%d",&age);
    printf("\nEnter your height in cm: ");
    scanf("%f",&height);
    printf("\nEnter your weight in kg: ");
    scanf("%f",&weight);
    printf("\nEnter your gender (M/F): ");
    scanf(" %c", &gen);
    printf("\nEnter your education qualification: ");
    scanf(" %[^\n]%*s", school);

    printf("\nName: %s", name);
    printf("\nAge: %d", age);
    printf("\nHeight: %2.f cm", height);
    printf("\nWeight: %2.f kg", weight);
    printf("\nGender: %c", gen);
    printf("\nEducation Qualification: %s\n", school);

    
    return 0;
}