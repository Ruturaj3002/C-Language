#include <stdio.h>
int rightshift(int arr[], int d, int n)

{
    int temp[n];

    int k = 0,i;

    for (i = d; i < n; i++)

    {

       // temp[k] = arr[i];
        k++;
    }

    for (i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    for (i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}

int main()
{
    // code
    int i, arr[100], n, d;

    printf("\nenter the total numbers in array:\n ");

    scanf("%d", &n);

    printf("\nenter the number of rotating of array\n: ");

    scanf("%d", &d);

    printf("\nEnter the numbers\n ");

    for (i = 0; i < n; i++)

    {
        scanf("%d", &arr[i]);
    }

    rightshift(arr[i], d, n);

    return 0;
}
