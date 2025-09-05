#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    struct book {
        char name[15];
        float price;
    } 
    b1 = {"Harry Fidleston", 120};
    struct book b2 = {"Nig Barret", 150};
    struct book b3= {"Will Graham", 200};
    printf ("Name: %s\nPrice: %.2f\n", b1.name, b1.price);
    return 0;
  
}