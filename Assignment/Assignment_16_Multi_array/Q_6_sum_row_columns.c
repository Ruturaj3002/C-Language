#include <stdio.h>
int main()
{
    // code
    int arr1[3][3];

    int i, j, sum = 0;

    printf("enter 9 elemts: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("the sum of row is\n ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = sum + arr1[i][j];
        }

        printf("%d ", sum);
    }
    printf("\n");
    
    printf("the sum of coloums is\n ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = sum + arr1[j][i];
        }

        printf("%d ", sum);
    }

    return 0;
}
