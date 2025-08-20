#include <stdio.h>

int main()
{
    int array[3][3] = {1, 0, -1, -1, 2, 3, 2, 4, 5};
    int i, j;
    int count = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (count == 0)
            {
                printf("%d ", array[i][j]);
            }
            else
            {
                printf("0 ");
            }
            count++;
            if (count == 4)
                count = 0;
        }
        printf("\n");
    }
    return 0;
}