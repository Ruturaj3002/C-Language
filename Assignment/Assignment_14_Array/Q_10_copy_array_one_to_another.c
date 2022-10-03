#include <stdio.h>
int main()
{
    // code
    int i, j, n, arr[100], arr2[100];

    printf("enter the amount(length) of array: ");

    scanf("%d", &n);

    printf("enter the elements in array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nthe value is first array is:\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n; i++)

    {

        arr2[i] = arr[i];
    }

    printf("\nthe value is second array is \n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
//