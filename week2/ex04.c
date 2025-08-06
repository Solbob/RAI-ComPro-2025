#include<stdio.h>
  
int main() {
    char name[20];
    int studentID;
    int ProScore;
    int PhyScore;
    int CalScore;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your student ID: ");
    scanf("%d", &studentID);
    printf("Enter your Programming score: ");
    scanf("%d", &ProScore);
    printf("Enter your Physics score: ");
    scanf("%d", &PhyScore);
    printf("Enter your Calculus score: ");
    scanf("%d", &CalScore);
    printf("Hi my name is %s (%d), your GPA is %.2f\n", name, studentID, (ProScore + PhyScore + CalScore) / 3.0);
    return 0;
}