#include <stdio.h>

char CharGrade(int score)
{
    if (score >= 80)
        return 'A';
    else if (score >= 70)
        return 'B';
    else if (score >= 60)
        return 'C';
    else if (score >= 50)
        return 'D';
    else
        return 'F';
}

float NumGrade(char grade)
{
    switch (grade)
    {
    case 'A':
        return 4.0;
    case 'B':
        return 3.0;
    case 'C':
        return 2.0;
    case 'D':
        return 1.0;
    default:
        return 0.0;
    }
}

int main()
{
    int cal, phy, com;
    char calcGrade, physGrade, compGrade;
    float calcGPA, physGPA, compGPA, GPA;

    printf("Calculus score: ");
    scanf("%d", &cal);
    printf("Physics score: ");
    scanf("%d", &phy);
    printf("Compro score: ");
    scanf("%d", &com);

    calcGrade = CharGrade(cal);
    physGrade = CharGrade(phy);
    compGrade = CharGrade(com);

    calcGPA = NumGrade(calcGrade);
    physGPA = NumGrade(physGrade);
    compGPA = NumGrade(compGrade);

    GPA = (calcGPA + physGPA + compGPA) / 3;

    printf("\n%-10s%6s%8s%8s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------------\n");
    printf("%-10s%6d%8c%8.1f\n", "Cal", cal, calcGrade, calcGPA);
    printf("%-10s%6d%8c%8.1f\n", "Physics", phy, physGrade, physGPA);
    printf("%-10s%6d%8c%8.1f\n", "compro", com, compGrade, compGPA);

    printf("\nGPA: %.1f\n", GPA);

    return 0;
}