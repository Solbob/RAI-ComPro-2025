#include <stdio.h>

int main()
{
    int array[3][3] = {1, 0, -1, -1, 2, 3, 2, 4, 5};
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
        }
    return 0;
}