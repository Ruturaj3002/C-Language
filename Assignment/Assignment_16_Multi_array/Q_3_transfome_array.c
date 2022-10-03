#include <stdio.h>
int main()
{
    // code
    int arr1[3][3];
    int arr2[3][3];
    int trans[3][3];

    int i, j;

    printf("enter 9 elements: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("enter 9 elements: ");

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
            arr2[i][j] = arr1[j][i];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr1[j][i]);
            printf("\n");
            printf("%d ", arr2[i][j]);
        }
    }

    return 0;
}
