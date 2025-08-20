#include <stdio.h>

int main()
{
    int array[3][3] = {1, 0, -1, -1, 2, 3, 2, 4, 5};
    int i, j, p, a, b, c;
    int count = 0;

    for (i = 0; i < 3; i++)
    {
        for (p = 0; p < 3; p++)
        {
            for (j = 0; j < 3; j++)
            {
                if (count == 0)
                {
                    a = array[i][j] * array[j][p];
                }
                else if (count == 1)
                {
                    b = array[i][j] * array[j][p];
                }
                else if (count == 2)
                {
                    c = array[i][j] * array[j][p];
                }
                count++;
                if (count == 3)
                {
                    printf("%d ", a + b + c);
                    count = 0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
// THIS IS THE HARDEST I'VE DONE SO FAR LIKE I HAVE A WHOLE ASS SCRATCH PAPER FOR THIS (if you want to see :3)