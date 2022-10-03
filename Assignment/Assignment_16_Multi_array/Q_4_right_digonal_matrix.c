#include <stdio.h>
int main()
{
    // code
    int str[3][3];

    int i, j, sum = 0;

    printf("Enter 9 elements: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &str[i][j]);
        }
    }

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            
                sum += str[i][j];

            printf("%d ", sum);

            sum = 0;
        }
    }

    return 0;
}
