#include <stdio.h>
int main()
{
    // code
    int i, arr[10], odd = 0, even = 0;

    printf("enter 10 numbers: ");
    
    for (i = 0; i <= 9; i++)
    {

        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)

            even = even + arr[i];

        else

            odd = odd + arr[i];
    }

    printf("the sum of even number is %d ", even);

    printf("\nthe sum of odd number is %d ", odd);

    return 0;
}
