#include <stdio.h>

int main(){
    printf("Hello World!");
    printf(" This is my first program");
    printf("\n\tI\'m an engineer\n");
    printf("My name is : %s\n", "Asanai");
    printf("My point : %d\n", 20+30+39);
    printf("Grade : %c\n", 'A');
    printf("GPA : %f ", 3.99);
    printf("\nAge = %d, GPAX = %f\n", 18, 3.5);
    printf("Programming: %f\nPhysics: %f", 4.0, 3.75);
    printf("123456789012345678901234567890");
    printf("\n%20d*", 46);
    printf("\n%-20d*", 46);
    printf("\n%3d*", 46);
    printf("\n%3d*", 2550);
    printf("123456789012345678901234567890");    
    printf("\n%20c*", 'c');
    printf("\n%-20c*", 'c');
    printf("\n%10s*", "Pro");
    printf("\n%10s*", "Pro");
    printf("123456789012345678901234567890");  
    printf("\n%20s*", "programming");
    printf("\n%-20s*", "programming");
    printf("\n%3s*", "programming");
    printf("\n%20.3s*", "programming");
    printf("\n%-20.3s*", "programming");

    printf("\nSalary %15s %8d ", ":", 6500);
    printf("\nMoney/Week %11s %8.2f", ":", 6500.00/7);
    printf("\nMoney/day %12s %8.3f", ":", 6500.000/4/7);


    return(0);
}