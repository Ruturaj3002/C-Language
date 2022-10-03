#include <stdio.h>
int main()
{
    // code
    int i, j, arr[100], n;

    printf("enetr the number of elements in the array: ");

    scanf("%d", &n);

    printf("enter the numbers: ");

    for (i = 0; i < n; i++)

    {

        scanf("%d", &arr[i]);
    }
    printf("\nthe element in array is \n");

    for (i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    printf("\n\nthe revrse order is \n");

    for (i = n - 1; i >= 0; i--)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}
