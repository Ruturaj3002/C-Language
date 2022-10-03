#include <stdio.h>
int main()
{
    // code
    int arr1[3][3];

    int arr2[3][3];

    int sum[3][3] = {0};

    int i, j;

    printf("enter the numbers is 1st array: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nenter the element in 2nd array: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\nthe sum of array is :");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
    }

    return 0;
}
