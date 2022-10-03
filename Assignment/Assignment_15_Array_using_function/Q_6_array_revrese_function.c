#include <stdio.h>

void reverse(int arr[], int n)
{
    int i;
    printf("\n\nThe reverse array is:\n ");

    for (i = n - 1; i >= 0; i--)
    {

        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

int main()
{
    // code

    int i, arr[100], n;

    printf("\nenter the total element in array: ");

    scanf("%d", &n);

    printf("enter the numbers:\n ");

    for (i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }

    printf("\nThe values in array is:\n ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    reverse(arr, n);

    return 0;
}
