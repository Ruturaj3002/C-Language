#include <stdio.h>
int main()
{
    // code
    int i, j, arr[10], swap;

    printf("enter 10 numbers: ");

    for (i = 0; i <= 9; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (i = 0; i <= 8; i++)

    {

        for (j = i + 1; j <= 9; j++)
        {

            if (arr[i] > arr[j])
            {

                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
