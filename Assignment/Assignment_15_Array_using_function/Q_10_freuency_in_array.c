#include <stdio.h>
int main()
{
    // code
    int i, arr[100], n;
    int freq[100] = {0};

    printf("enter the total number of elements in array: ");

    scanf("%d", &n);

    printf("\nenter the elements: \n");

    for (i = 0; i < n; i++)

    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)

    {

        freq[arr[i]]++;
    }

    for (i = 0; i < n; i++)

    {
        if (freq[i] != 0)
        
            printf("\nthe frequnecy of elemnts %d  is ==> %d ", i, freq[i]);
    }

    return 0;
}
