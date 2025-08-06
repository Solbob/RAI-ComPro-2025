#include<stdio.h>
  
int main() {
    int firstnum;
    int secondnum;
    int thirdnum;
    int min;
    int max;
    int sum;
    float avg;
    printf("Enter first number: ");
    scanf("%d", &firstnum);
    printf("Enter second number: ");
    scanf("%d", &secondnum);
    printf("Enter third number: ");
    scanf("%d", &thirdnum);
    if (firstnum < secondnum && firstnum < thirdnum) {
        min = firstnum;
    } else if (secondnum < firstnum && secondnum < thirdnum) {
        min = secondnum;
    } else {
        min = thirdnum;
    }
    printf("Minimum number is: %d\n", min);
    if (firstnum > secondnum && firstnum > thirdnum) {
        max = firstnum;
    } else if (secondnum > firstnum && secondnum > thirdnum) {
        max = secondnum;
    } else {
        max = thirdnum;
    }
    printf("Maximum number is: %d\n", max);
    sum = firstnum + secondnum + thirdnum;
    printf("Sum of three numbers is: %d\n", sum);
    avg = sum / 3.0;
    printf("Average of three numbers is: %.2f\n", avg);

    return 0;
}