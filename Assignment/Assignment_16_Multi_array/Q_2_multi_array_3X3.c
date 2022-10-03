#include <stdio.h>
int main()
{
    // code
    int arr1[3][3];
    int arr2[3][3];
    int som[3][3];

    int i, j, k, sum = 0;

    printf("enter 9 number in first array: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("enter 9 number in second array: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum = sum + (arr1[i][k] * arr2[k][j]);
            }
            som[i][j] = sum;
            sum = 0;
        }
    }

    printf("the sum is: \n");

    printf("------------");
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("|");

        for (j = 0; j < 3; j++)
        {

            printf("%d | ", som[i][j]);
        }
        printf("\n");
    }

    printf("------------");

    return 0;
}
