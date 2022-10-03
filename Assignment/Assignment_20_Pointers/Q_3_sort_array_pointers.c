#include <stdio.h>

void sort(int *ptr, int size)
{
    int i, j, temp = 0;

    for (i = 0; i < size - 1; i++)
    {

        for (j = i; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                temp = ptr[i];

                ptr[i] = ptr[j];

                ptr[j] = temp;
            }
        }
    }
}
int main()
{
    // code
    int arr[20], n, i;

    printf("enter the number of elements in array: ");

    scanf("%d", &n);

    printf("enter elements in array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("the sorted elements is ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
