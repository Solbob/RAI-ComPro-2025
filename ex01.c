#include <stdio.h>

int main(){

    printf("\nSalary %15s %8d ", ":", 6500);
    printf("\nMoney/Week %11s %8.2f", ":", 6500.00/7);
    printf("\nMoney/day %12s %8.3f", ":", 6500.000/4/7);


    return(0);
}