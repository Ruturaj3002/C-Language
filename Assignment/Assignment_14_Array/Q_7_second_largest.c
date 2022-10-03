#include <stdio.h>

int main()
{
    // code
    int i, arr[100], n;
    int largest = 0, s_largest = 0;

    printf("enter the total number od element: ");

    scanf("%d", &n);

    printf("emter the numbers: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 0; i < n; i++)
    {

        if (arr[i] > largest)

        {
            s_largest = largest;

            largest = arr[i];
        }

        if (arr[i] > s_largest)

        {
            s_largest = arr[i];
        }
    }

    printf("\nthe largest element is %d", largest);

    printf("\n\nthe second largest is %d", s_largest);

    return 0;
}
