#include <stdio.h>

void rightshift(int arr[])
{

    int i, j, d;

    for (d = 0; d < 2; d++)
    {
        j = arr[0];

        for (i = 0; i <= 8; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[9] = j;
    }

    printf("\n\nThe 2 times right shifted array is:\n\n");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()

{
    // code
    int i, arr[10];

    printf("enter 10 numners: ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe original array is:\n\n ");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    rightshift(arr);

    return 0;

}
