#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    struct book {
        char name[15];
        float age;
        float score;
    } 
    b1 = {"Harry Fidleston", 12, 69.3};
    struct book b2 = {"Nig Barret", 15, 80};
    struct book b3= {"Will Graham", 20, 76.5};
    printf ("Student 1's name: %s\nStudent 1's name Age: %.2f\nStudent 1's name Score: %.2f", b1.name, b1.age, b1.score);
    printf ("\nStudent 2's Name: %s\nStudent 2's Age: %.2f\nStudent 2's Score: %.2f", b2.name, b2.age, b2.score);
    printf ("\nStudent 3's Name: %s\nStudent 3's Age: %.2f\nStudent 3's Score: %.2f", b3.name, b3.age, b3.score);
    return 0;
}