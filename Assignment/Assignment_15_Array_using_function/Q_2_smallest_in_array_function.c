#include <stdio.h>

int small(int arr[])

{
    int i;

    for (i = 0; i <= 9; i++)

    {
        if (arr[0] > arr[i])
        {

            arr[0] = arr[i];
        }
    }

    return arr[0];
}

int main()
{
    // code
    int i, arr[10];

    printf("Enter 10 numbers: \n");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    small(arr);

    printf("\nThe smallest value in array is: \n");

    printf("%d", small(arr));

    return 0;
}
