#include <stdio.h>

int main()
{
    int marks[0];
    int lowest = 0;
    int highest = 0;
    for (int i = 0; i < 8; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (i == 0 || marks[i] > highest)
        {
            highest = marks[i];
        }
        if (i == 0 || marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    printf("\nSmallest number: %d\n", lowest);
    printf("Largest number: %d\n", highest);

    return 0;
}