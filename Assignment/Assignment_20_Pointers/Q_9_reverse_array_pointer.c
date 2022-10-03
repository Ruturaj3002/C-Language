#include <stdio.h>
int main()
{
    // code
    int *arr[200], n, i;

    printf("enter total number of elements in array: ");

    scanf("%d", &n);

    printf("\nenter the elements in array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the elements in array in reverse order: ");

    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}
