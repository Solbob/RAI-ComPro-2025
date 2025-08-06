#include <stdio.h>

int main()
{
    int cal;
    int phy;
    int com;
    char name[100];
    float avg;

    printf("Enter your name: ");
    scanf("%99s", name);
    printf("Enter your Calculus score: ");
    scanf("%d", &cal);
    printf("Enter your Physics score: ");
    scanf("%d", &phy);
    printf("Enter your Computer score: ");
    scanf("%d", &com);

    avg = (cal + phy + com) / 3.0;
    if (avg >= 80)
    {
        printf("%s, your average is %.2f Grade A\n", name, avg);
    }
    else if (avg >= 70)
    {
        printf("%s, your average is %.2f Grade B\n", name, avg);
    }
    else if (avg >= 60)
    {
        printf("%s, your average is %.2f Grade C\n", name, avg);
    }
    else if (avg >= 50)
    {
        printf("%s, your average is %.2f Grade D\n", name, avg);
    }
    else
    {
        printf("%s, your average is %.2f Grade F\n", name, avg);
    }

    return 0;
}