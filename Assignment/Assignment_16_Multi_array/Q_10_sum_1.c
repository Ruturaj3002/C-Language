#include <stdio.h>
int main()
{
    // code
    int arr[3][3];

    int i, j, sum = 0, max = 0;

    printf("enter 9 elements in matrix: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
                sum = sum + arr[i][j];
        }
        if (sum > max)
            max = sum;
    }

    printf("the max sum is: %d", max);

    return 0;
}
